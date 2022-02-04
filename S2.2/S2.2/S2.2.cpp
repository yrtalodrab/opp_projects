#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_ALL, "rus");


	double side1;
	double p;
	cout << "Введите сторону квадрата: ";
	cin >> side1;
	p = side1 * 4;
	cout << "Периметр квадрата равен: " << p;
}