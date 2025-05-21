#include <iostream>
using namespace std;

#define tab "\t";

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);

void Print(int arr[], const int n);
void Print(double arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];

	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);

	const int SIZE = 8;
	double brr[SIZE];

	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab
	}
	cout << endl;

}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

/*
Передача массива в функцию:

Для того, чтобы показать, что принимаемый параметр массив, после имени этого параметра пишутся квадратные скобки.
Кроме самого массива, функция так же всегда принимает размер этого массива. 
И того, любая функиця, работающая с массивом, принимает как минимум два парамерта - массив и его размер.

Перегрузка функций:

Перегрузкой функции называется ситуация, при которой есть две и более функции с одинаковым именем, но разным списком принимаемых параметров.
Список принимаемых параметров перегруженных функций может отличаться как типом, так и количеством аргументов.

Тип возвращаемого значения перегруженных функций так же может отличаться, но перегруженные функции не могут отличаться лишь типом возвращаемого значения,
поскольку компилятор определяет какой экземпляр перегруженной функции нужно вызвать по списку определяемых параметров, а не по возвращаемому значению.

Реализации перегруженных функций так же могут отличаться или быть идентичными.
Как правило, если список принимаемых параметров перегруженной функции отличается лишь типом принимаемых аргументов, то реализация таких функций будут идентичны или как минимум очень похожи
Но если список принимаемых параметров перегруженных функций отличается количеством аргументов, то скорее всего и реализации этих функций будут разными.

Если функция не умеет работать с каким-либо типом данных, то её нужно перегрузить для этого типа данных.
*/