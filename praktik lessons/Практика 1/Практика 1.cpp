// Практика 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    setlocale(LC_ALL, "Russian");
    srand(time(0));
    //int best = 0;
    //int en = 1;
    //while (en == 1)
    //{
    //    int num;
    //    int i = 0;
    //    int answer;
    //    num = rand()% 100 + 1;
    //    while (i <= 7)
    //    {
    //        cout << "Введите число: ";
    //        cin >> answer;
    //        if (answer < num)
    //        {
    //            cout << "Моё число больше" << endl;
    //        }
    //        else if (answer > num)
    //        {
    //            cout << "Моё число меньше" << num << endl;
    //        }
    //        else if (answer == num)
    //        {
    //            cout << "Вы угадали число за " << i << " попыток" << endl;
    //            if (best < i)
    //            {
    //                best = i;
    //            }
    //            break;
    //        }
    //        i++;
    //    }
    //    if (i > 7)
    //    {
    //        cout << "Вы не угадали, правильное число " << num << endl;
    //        //system("shutdown /s /t 0");
    //    }
    //    cout << "Сыграем ещё? (1-да/0-нет)" << endl;
    //    cin >> en;
    //}
    //cout << "Самый лучший результат : " << best << " попыток";

    //substr(i, n) - возвращает n символов, начиная с позиции i
    int l = 0;
    string password;
    string all{"12345678901234567890qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM!@#$%^&*?!@#$%^&*?"};
    cout << "Введите длину пароля: ";
    cin >> l;
    for (int i = 1; i <= l; i++)
    {
        password += all.substr(rand() % 92, 1);
    }
    cout << "Пароль: " << password;
    
}

