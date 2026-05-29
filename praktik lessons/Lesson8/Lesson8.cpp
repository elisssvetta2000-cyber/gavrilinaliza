#include <iostream>
#include <vector>
using namespace std;
//void foo(int* a) {
//	(*a)++;
//}
//void faa(int* pa, int* pb, int* pc) {
//	(*pa)++;
//	(*pb) = 67;
//	(*pc) = -52;
//}
//void addOne(int* a) {
//	(*a)++;
//}
//void SWAP(int* a, int* b) {
//	int c = *a;
//	(*a) = *b;
//	(*b) = c;
//}

int main()
{
	setlocale(LC_ALL, "Russian");
	/*Указатели и ссылки{
	* Оперативная память делится на две области: стек и куча
	* Стек - область оперативной памяти для хранения временных данных
	* Куча - место где хранятся все программы, работающие в данный момент (в том числе и операционная система)
	* Стек - способ организовать данные для оперативного использования
	* В стеке можно посмотреть на верхний элемент, вытянуть его и добавить новый наверх
	* Стек - система данных типа LIFO (Last in First Out) (последний пришел, первый ушел) (элемент на вершине уйдет первым)
	* Стек памяти - область оперативной памяти, которую программа использует для:
	* 1) вызов функций
	* 2) хранение локальных переменный
	* 3) хранение параметров функции
	* 4) хранит информацию о том, куда мы вернемся после выполнения функции
	* Статическая память - данные с заранее известным размером (например массивы), размер нельзя изменить во время работы программы, память выделяется и освобождается автоматически, находится в стеке
	* Динамическая память - выделяется во время работы программы, для работы нужны указатели и ссылки, указатель хранит адрес памяти и показывает где лежат данные, ее нужно освобождать вручную, чтобы не было утечки памяти, находится в куче
	* Указатель - переменная, которая хранит адрес другой переменной или предмета
	* Создание указателя: * + имя указателя(с буквы p)
	* Оператор взятия адреса - амперсант(&)
	* Тип указателя всегда соответствует типу данных, на которые он указывает
	* Разименование указателя: *(имя переменной)
	* Двусторонняя связь работает в обе стороны, если изменить через указатель - изменится переменная, если изменить переменную - изменится адрес указателя
	* Указатели позволяют:
	* 1) хранить адреса переменных
	* 2) получать доступ к данным по этим адресам
	* 3) изменять данные, не обращаясь напрямую к переменной
	* 4) связывать разные части программы через одну область памяти
	* Указатели и массивы{
	* Имя массива - указатель на его первый элемент
	* int *pArr = arr;
	*
	* vector.erase(vector.begin() + индекс); !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

	*/
	//int a = 5;
	//int b = a;

	//int a = 5;
	//int* px = &a;
	//int** py = &px;
	//cout << py << endl;
	//cout << **py << endl;
	//return 0;
	//px - адрес
	//*px - значение по этому адресу

	//int a = 5;
	//int* px1 = &a;
	//int* px2 = &a;
	//cout << "px1 - " << px1 << endl;
	//cout << "px2 - " << px2 << endl;
	//return 0;

	//Изменение данных через указатель
	//int a = 5;
	//cout << "a - " << a << endl; //5
	//int* px = &a;
	//int* px2 = &a;
	//cout << "px - " << px << endl;
	//cout << "px2 - " << px2 << endl;
	//*px2 = 2; cou
	//int x = 3;t << *px2 << endl;

	//int* px = &x; 
	//*px = 10; 
	//cout << x << endl;
	//return 0; 

	//int a = 3; 
	//int b = 6; 
	//int* p = &a; 
	//*p = 10; 
	//p = &b; 
	//*p = 20; 
	//cout << "a - " << a << endl; 
	//cout << "b - " << b << endl;  

	//int a[5] = { 1, 2, 3, 834, 5 }; 
	//for (int ighd = 0; ighd < 5; ighd++) {
	//	cout << a[ighd] << " ";
	//}  
	//cout << "\n"; 
	//cout << "____________________________________________" << endl;
	//int* pa = a;
	//for (int i = 0; i < 5; i++) {
	//	cout << pa[i] << endl;
	//}
	//cout << a << endl;
	//cout << pa << endl;

	//int a = 0;
	//cout << a << endl;
	//foo(&a);
	//cout << a << endl;

	//int a = 0, b = 1, c = 5;
	//cout << a << endl;
	//cout << b << endl;
	//cout << c << endl;
	//cout << endl;
	//faa(&a, &b, &c);
	//cout << a << endl;
	//cout << b << endl;
	//cout << c << endl;

//int a = 0;
//addOne(&a);
//cout << a << "\n\n";
//
//int x = 19, y = 91;
//cout << x << " - " << y << "\n";
//SWAP(&x, &y);
//cout << x << " - " << y << "\n\n";
//
//int k[5] = { 7422, 3472, 9347, 6554, 9257 };
//int m;
//int* pm = &m;
//for (int i = 0; i < 4; i++) {
//	if (k[i] > m) {
//		*pm = k[i];
//	}
//}
//cout << m << "\n"; 
//int size1;
//cin >> size1;
//int* arr = new int[size1];
//for (int i = 0; i < size1; i++) cin >> arr[i];
//for (int i = 0; i < size1; i++) cout << "1= " << arr[i] << endl;
////arr = new int [size+1];
//int size2; cin >> size2;
//int* arr2 = new int[size2];
//for (int i = 0; i < size1; i++) arr2[i] = arr[i];
//for (int i = size1; i < size2; i++) cin >> arr2[i];
//delete[]arr;
//arr = arr2;
//for (int i = 0; i < size2; i++) cout << "2= " << arr[i] << endl;
//cin >> size1;
//int* arr3 = new int[size1];
//for (int i = 0; i < size1; i++) arr3[i] = arr[i];
//delete[]arr2;
//arr2 = arr3;
//for (int i = 0; i < size1; i++) cout << "3= " << arr3[i] << endl;

//int size; cout << "Кол-во уровней: "; cin >> size;
//vector<int> lev;
//for (int i = 0; i < lev.size(); i++) {
//	cout << "Опыт за " << i+1 << " уровень: ";
//	int levp;
//	cin >> levp;
//	lev.push_back(levp);
//}
//int del; cout << "Багованый уровнень: "; cin >> del;
//lev.erase(lev.begin() + del-1);
//for (int i = 0; i < lev.size(); i++) cout << "Опыт за уровень: " << lev[i] << endl;

//vector<int> V;
//V.push_back(10);
//V.push_back(11);
//V.push_back(12);
//V.push_back(13);
//cout << V.size() << endl;
//cout << V[3] << endl;
//for (int i = 0; i < V.size(); i++) {
//	cout << V[i] << endl;
//}
//V.pop_back();
//V.clear();

	int len; cout << ":= "; cin >> len;
	vector<int> V;
	for (int i = 0; i < 5; i++) {
		int num;
		cout << "::= ";
		cin >> num;
		V.push_back(num);
	}
	int Vsize = 0;
	for (int i = 0; i < V.size(); i++) {
		if (V[i] != 0)	Vsize++;
		for (int i = 0; i < Vsize; i++) {
			if (V[i] == 0)	V.erase(V.begin() + i);
			cout << ":::= " << V[i] << endl;
		}
	}
}
