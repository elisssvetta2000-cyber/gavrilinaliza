
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    /*массив - это набор элементов одного типа, расположенныx в памяти подряд
    Определение массива
    тип переменной  название массива  длина массива
    int a[5]; массив с неопределенными числами
    Устнавливаем значение массива
    int a[5] = { 1, 2, 3, 4, 5};

    Константные массивы - нельзя изменять
    const int numbers[4] = {1, 2, 3, 4};
    number [1] = 23; ошибка

    можно перезаписать элементы массива:
    int a[5] = {1, 2, 3, 4, 5};
    a[3] = 9;

    линейный поиск - поиск нужного числа, проверяя все числа по очереди, пока не найдется совпадение
    int a[5];
    for (int i = 0; i < 5; i++) cin >> a[i];
    int x;
    cin >> x;
    bool found = false;
    for (int i = 0; i < 5; i++) {
        if (a[i] == x) {
            cout << "Нашёлся на позиции " << i;
            found = true;
            break;
        }
    }
    if (!found) cout << "Не найден";

    Сортировка пузырьком - мног раз пробегаем по массиву и меняем местами соседние числа, пока они не станут записаны от меньшего к большему
    int a[5];
    for (int i = 0; i < 5; i++) cin >> a[i];
    int n = 5;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    cout << "\n";
    for (int i : a) cout << i << endl;

    int A[номер строки][номер столбца]
    A[0][0] A[0][1] A[0][2] A[0][3]
    A[1][0] A[1][1] A[1][2] A[1][3]
    A[2][0] A[2][1] A[2][2] A[2][3]




    */
    //int a[5] = { 1, 2, 3, 4, 5 };
    //int num1[ ] = { 1, 2, 3 }; // не допускается присвоение массиву другого массива
    //int num2[] = num1;
    //int b[10];
    //cout << b[8] << endl;
    //int c[5] = {1, 2};
    //cout << c[1] << endl; //выводит наименьшее число
    //cout << c[2] << endl; //выводит 0
    //cout << c[3] << endl; //выводит 0
    //cout << c[4] << endl; //выводит 0
    //cout << c[5] << endl; //выводит наименьшее число
    //int d[3] = {};
    //cout << d[2] << endl; //выводит 0
    //int b[5];
    //int a = 0;
    //for (int i = 0; i < 5; i++)
    //{
    //    cin >> b[i];
    //}
    //for (int i = 0; i < 5; i++)
    //{
    //    cout << b[i] << endl;
    //}
    //cout << b << endl;
    //cout << (a = sizeof(b)) << endl; // длина массива

    //int num[5];
    //int b = 0;
    //for (int i = 0; i < 5; i++)
    //{
    //    cin >> num[i];
    //    if (num[i] > b) b = num[i];
    //}
    //cout << "Самое большое:" << b;

    //int a[5];
    //int b = a[0];
    //for (int i = 0; i < 5; i++) cin >> a[i];
    //
    //for (int i = 0; i < 5; i++)
    //{
    //    if (a[i] > b)
    //    {
    //        b = a[i];
    //    }
    //}
    //cout << "===" << b;

    //int a[5];
    //for (int i = 0; i < 5; i++) cin >> a[i];
    //int sum = 0;
    //for (int i : a)
    //{
    //    sum += i;
    //}
    //cout << sum;

    //int a[5];
    //for (int i = 0; i < 5; i++) cin >> a[i];
    //int x;
    //cin >> x;
    //bool found = false;
    //for (int i = 0; i < 5; i++) {
    //    if (a[i] == x) {
    //        cout << "Нашёлся на позиции " << i;
    //        found = true;
    //        break;
    //    }
    //}
    //if (!found) cout << "Не найден";

    //int a[5];
    //for (int i = 0; i < 5; i++) cin >> a[i];
    //int n = 5;
    //for (int i = 0; i < n - 1; i++) {
    //    for (int j = 0; j < n - 1 - i; j++) {
    //        if (a[j] > a[j + 1]) {
    //            int tmp = a[j];
    //            a[j] = a[j + 1];
    //            a[j + 1] = tmp;
    //        }
    //    }
    //}
    //cout << "\n";
    //for (int i : a) cout << i << endl;

    //int a[5];
    //for (int i = 0; i < 5; i++) cin >> a[i];
    //int n = 5;
    //for (int i = 0; i < 5; i++) {
    //    a[n - 1] = a[i];
    //    n -= 1;
    //}
    //for (int i : a) cout << i << endl;

    //int a[5];
    //int t;
    //for (int i = 0; i < 5; i++) cin >> a[i];
    //int n = 5;
    //for (int i = 0; i < 3; i++) {
    //    t = a[n - 1];
    //    a[n - 1] = a[i];
    //    a[i] = t;
    //    n -= 1;
    //}
    //cout << '\n';
    //for (int i : a) cout << i << endl;

    //int a[9];
    //for (int i = 0; i < 5; i++) cin >> a[i];
    //int n = 9;
    //for (int i = 0; i < 5; i++) {
    //    a[n - 1] = a[i];
    //    n -= 1;
    //}
    //cout << '\n';
    //for (int i : a) cout << i << endl;

    //int a[8] = { 10, 9, 8, 8, 9, 10, 9, 8 };
    //cout << "Длинна : 8" << endl;
    //double n = 0;
    //for (int i = 0; i < 8; i++)  if (a[i] == 8)  n += 1;
    //cout << "Количество 8: " << n << endl;
    //cout << "Процент 8: " << (n / 8) * 100 << "%" << endl;
    //double s = 0;
    //for (int i : a) s += i;
    //s /= 8;
    //cout << "Среднее арифметическое: " << s << endl;

    //int a[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };
    //for (int i = 0; i < 3; i++) {
    //    for (int j = 0; j < 5; j++) {
    //        cout << a[i][j] << " = ";
    //    }
    //    cout << endl;
    //}

    int a[100][100];
    int n, m = 0;
    int s = 1;
    cin >> n >> m;
    //for (int i = 0; i < n; i++) {
    //    for (int j = 0; j < m; j++) {
    //        cin >> a[i][j];
    //    }
    //}
    for (int i = 0; i < n; i++) { // abc
        for (int j = 0; j < m; j++) { // abc
            a[i][j] = s; // abc
            s += 1; // abc
        } // abc
    } // abc
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    s = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            s += a[i][j];
        }
    }
    cout << "с= " << s << endl;
    s = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] > s) s = a[i][j];
        }
    }
    cout << "н= " << s << endl;
    s = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            s += a[i][j];
        }
        cout << "сс" << i+1 << "= " << s << endl;
        s = 0;
    }








}

