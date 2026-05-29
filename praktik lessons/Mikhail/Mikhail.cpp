// однострочный комментарий
/*многострочный комментарий
ааааааааа
ааааааа
ааааааа
аааааа
*/

#include <iostream> //библиотека для ввода и вывода
#include<string> //библиотека для строк
using namespace std;

// главная функция            
int main()

{
    setlocale(LC_ALL, "Russian");
    // команда для вывода
    //cout << "Привет" << endl;
    //cout << "Привет" << endl;
    /*Правила наименования переменных
    1)можно использовать только латинские буквы
    2)нельзя начинать с цифры
    3)нельзя использовать символы кроме _
    4)все переменные должны соответствовать содержанию
    Основные типы данных:
    int - целые числа (2, 9, 471)
    double - числа с дробной частью (1.5, 3.14)
    char - один символ ('3','7')
    bool - логический (true или false)
    string - текст ("Книга", "Привет мир")
    float - с плавающей точкой (1.5f, 3.14f)
    size_t - для хранения индексов т длин (всегда целый и не отрицательный)
    */
    //string name = "Миша";
    //cout << name << endl;
    //int age = 13;
    //cout << age << endl;
    //cout << "Мне " << age << " лет" << endl;
    // cin - команда для ввода
    //string book;
    //int pages;
    //cout << "Введите название книги: ";
    //cin >> book;
    //cout << "Введите количество страниц : ";
    //cin >> pages;

    //cout << book << " " << pages << endl;
    // Арифметичкские операции
    //cout << 3 + 5 << endl;
    //cout << 2 - 1 << endl;
    //cout << 3 * 5 << endl;
    //cout << 8 / 2 << endl;
    //cout << 1 % 3 << endl;
    //int a = 8;
    //int b = 3;
    //cout << a / b << endl;

    //double x = 8.5;
    //double y = 3.14;
    //cout <<x / y << endl;

    //string text1 = "Всем";
    //string text2 = "Привет";
    //cout << text1 + text2 << endl;

    /*узнать тип переменной : typeid(a).name()
    * Неявная конвертация:
    * int a = 5;
    * double b = a;
    * a = double, 5
    *
    * Явная конвертация:
    * double d = 7.9
    * int x = int(d)
    * d = int, 7
    *
    * Преобразование чисел в строку:
    * int num = 123;
    * string s = to_string(num)
    * num = string, "123"
    *
    * Преобразование строки в число:
    * string s = "45"
    * int num = stoi(s)
    * s = int, 45
    *
    * string s = "3.14"
    * double num = stod(s)
    * s = double, 3.14

    sizeof - встроенный оператор, который показывает сколько байт занимает тип или переменная
    sizeof(тип данных) -> sizeof(int)
    sizeof(переменная) -> sizeof(a)
    */

    //int i = 13;
    //double d = 3.14;
    //char c = '8';
    //string s = "Привет";
    //bool b = true;
    //float f = 1.5f;
    //cout << sizeof(i) << endl;
    //cout << sizeof(d) << endl;
    //cout << sizeof(c) << endl;
    //cout << sizeof(s) << endl;
    //cout << sizeof(b) << endl;
    //cout << sizeof(f) << endl;

    /* substr - вырезать кусок строки
    * substr(i, n) - возвращает n символов, начиная с позиции i
    * substr(откуда, сколько)
    * substr(i) - от i до конца строки
    *Найти подстроку(слово) - find
    *
    *
    *
    *
    */

    //string w = "Programming";
    //cout << w.substr(0, 6) << endl;
    //cout << w.substr(6, 3) << endl;
    //cout << w.substr(6, 5) << endl;

    /*Ввод строк:
    * cin - читает только одно слово до первого пробела
    * getline - читает всю строку, включая пробелы
    */

    //string q;
    //cin >> q;
    //cout << q << endl;
    //string q;
    //getline(cin, q);
    //cout << q << endl;

    //string s = "hello world";
    // Ищем подстроку
    //size_t pos = s.find(" ");
    //cout << pos << endl;





}