

#include <iostream>
using namespace std;

//void sayhello() { // void - ничего не возвращает
//    cout << "Привет" << endl;
//}
//void sayage(int age) {
//    cout << age << endl;
//}
//void sayr(int a, int b) {
//    cout << a - b << endl;
//}
//double sayS(double a, double b) {
//    cout << "Площадь прямоугольника с длиной " << a << " и шириной " << b << " равна " << a * b << endl;
//    return a*b;
//}
//double sqr(double x) {
//    return x * x;
//}
//void InDet(string product, double count, string x) {
//    cout << "Ингредиент: " << product << "; количество: " << count << x << endl;
//}
void trn(double a, double b, double c) {
    if ((a >= b + c) || (b >= a + c) || (c >= a + b)) {
        cout << "Не треугольник" << endl;
    }
    else if ((a == b) && (c == a) && (b == c)) {
        cout << "Равносторонний" << endl;
    }
    else if ((a == b) || (a == c) || (b == c)) {
        cout << "Равнобедренный" << endl;
    }
    else if ((a != b) && (a != c) && (b != c)) {
        cout << "Разносторонний" << endl;
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");
    /* функция - блок кода, который повторяется много раз
    функция состоит из трех частей: прототип, вызов, определение
    прототип - об явление функции без тела, только если функция определена после main ( void name() )
    прототип -> сообщает офункции
    вызов -> запускает функцию
    определение -> содержит код

    Функция с возвратом значения:
    int sumnum(int a, int b){
        return a+b
        }
    int main(){
        int resunt = sumnum(3, 5) //вызов функции, какой тип(result)(int), такой и вх\ю иеЬТС Чырнется
        cout << result << endl;
        return 0;
    }
     
    void Number(int x);{
    cout << x << endl;
    }
    Number(5);

    Параметры - то, что указывается в объявлении функции
    Аргументы - передается в вызове функции
    Функция(параметры)
    int main()
        функция(аргументы)

    Функция с 1 параметром:
    void sayname(string name) {
        cout << name << endl;
    }
    int main(){
        sayname("Леша");
    }

    Функция с несколькими параметрами:
    void sum(int a; int b){
        cout << a + b << endl;
    }
    int main(){
        sum(3; 4);
        sum(10; 10);
        }

    Функция с параметром по умолчанию:
    тип имя_функции(тип параметр1 = значение1...){
        тело функции;
    }

    return:
    1)Возвращает значение функции
    2)Завершает выполнение функции
    3)После return функция не выполняется

    Функция с возвращением значения:
    int sum(int a; int b){
        return a + b;
    }

    Несколько return в функции:
    int max(int a, int b){
        if (a>b){
            return a;
        }return b;
    }









    */
    //sayhello();

    //sayage(13);
    //sayr(467435426733409, 467435426733396);
    //sayS(4, 5);
    //sayS(2.55, 7.83);
    //sayS(3.74322, 9.39617);
    //sqr(2);
    //sqr(34);
    //sqr(68.896);
    //InDet("Ничего", 3, "шт.");
    //InDet("Все", 1, "ч. ложка");
    //InDet("Что-то", 5, "ст. ложек");
    //InDet("???", 93, "дольки");
    trn(2, 3, 6);
    trn(5, 5, 5);
    trn(6, 1, 6);
    trn(3, 8, 9);



    return 0;
}

