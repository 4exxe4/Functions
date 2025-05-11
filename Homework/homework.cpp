#include <iostream>
using namespace std;

int FACTORIAL(int n)
{
	if (n < 0)
	{
		cout << "��������� ����� ���� ��������� ������ ��� ������������� ����� �����:";
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
	//���������
	int num;
	cout << "������� ����� ��������������� ����� ��� ���������� ����������: "; cin >> num;
	cout << "��������� ����� " << num << " ����� " << FACTORIAL(num) << endl;

	//�������
	double base;
	int exponent;
	cout << "������� �����: "; cin >> base;
	cout << "������� �������: "; cin >> exponent;
	cout << base << " � ������� " << exponent << " = " << POWER(base, exponent) << endl;

	return 0;
}