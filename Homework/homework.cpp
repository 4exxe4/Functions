#include <iostream>
using namespace std;

int FACTORIAL(int n)
{
	if (n < 0)
	{
		cout << "Факториал может быть определен только для положительных целых чисел:";
		return 0;
	}
	unsigned long long result = 1;

	for (int i = 2; i <= n; i++)
	{
		result *= i;
	}

	return result;
}

double POWER(double a, int n) 
{
	double result = 1;

	if (n < 0)
	{
		return 1.0 / result;
		return result;
	}
	for (int i = 0; i < n; i++)
	{
		result *= a;
	}
	return result;
}


int main()
{
	setlocale(LC_ALL, "");
	//Факториал
	int num;
	cout << "Введите целое неотрицательное число для вычисления факториала: "; cin >> num;
	cout << "Факториал числа " << num << " равен " << FACTORIAL(num) << endl;

	//Степень
	double base;
	int exponent;
	cout << "Введите число: "; cin >> base;
	cout << "Введите степень: "; cin >> exponent;
	cout << base << " в степени " << exponent << " = " << POWER(base, exponent) << endl;

	return 0;
}