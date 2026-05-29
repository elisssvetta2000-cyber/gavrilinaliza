#include <SFML/Graphics.hpp>
#include <optional>
#include <cstdlib>
#include <ctime>

using namespace sf;

struct Point
{
    int x;
    int y;
};

int main()
{
    srand(static_cast<unsigned>(time(nullptr)));

    // В SFML 3 размер окна записывается через фигурные скобки:
    // VideoMode({ширина, высота})
    RenderWindow app(VideoMode({ 400, 533 }), "Doodle Game!");

    app.setFramerateLimit(60);

    Texture tBackground;
    Texture tPlatform;
    Texture tDoodle;

    if (!tBackground.loadFromFile("images/background.png"))
        return -1;

    if (!tPlatform.loadFromFile("images/platform.png"))
        return -1;

    if (!tDoodle.loadFromFile("images/doodle.png"))
        return -1;

    Sprite sBackground(tBackground);
    Sprite sPlatform(tPlatform);
    Sprite sDoodle(tDoodle);

    Point platform[20];

    // Создаём 10 платформ в случайных местах
    for (int i = 0; i < 10; i++)
    {
        platform[i].x = rand() % 400;
        platform[i].y = rand() % 533;
    }

    int x = 100;
    int y = 100;
    int h = 200;

    float dx = 0;
    float dy = 0;

    while (app.isOpen())
    {
        // В SFML 3 pollEvent() возвращает std::optional<sf::Event>
        while (const std::optional event = app.pollEvent())
        {
            // Закрытие окна
            if (event->is<Event::Closed>())
            {
                app.close();
            }
        }

        // Управление игроком
        if (Keyboard::isKeyPressed(Keyboard::Key::Right))
        {
            x += 3;
        }

        if (Keyboard::isKeyPressed(Keyboard::Key::Left))
        {
            x -= 3;
        }

        // Гравитация
        dy += 0.2f;
        y += static_cast<int>(dy);

        // Если игрок упал вниз — подкидываем его вверх
        if (y > 500)
        {
            dy = -10;
        }

        // Если игрок поднялся выше определённой высоты,
        // двигаем платформы вниз
        if (y < h)
        {
            y = h;

            for (int i = 0; i < 10; i++)
            {
                platform[i].y = platform[i].y - static_cast<int>(dy);

                // Если платформа ушла вниз за экран,
                // переносим её наверх
                if (platform[i].y > 533)
                {
                    platform[i].y = 0;
                    platform[i].x = rand() % 400;
                }
            }
        }

        // Проверка столкновения игрока с платформами
        for (int i = 0; i < 10; i++)
        {
            if ((x + 50 > platform[i].x) &&
                (x + 20 < platform[i].x + 68) &&
                (y + 70 > platform[i].y) &&
                (y + 70 < platform[i].y + 14) &&
                (dy > 0))
            {
                dy = -10;
            }
        }

        // Устанавливаем позицию игрока
        sDoodle.setPosition(Vector2f(
            static_cast<float>(x),
            static_cast<float>(y)
        ));

        // Отрисовка
        app.clear();

        app.draw(sBackground);
        app.draw(sDoodle);

        for (int i = 0; i < 10; i++)
        {
            sPlatform.setPosition(Vector2f(
                static_cast<float>(platform[i].x),
                static_cast<float>(platform[i].y)
            ));

            app.draw(sPlatform);
        }

        app.display();
    }

    return 0;
}