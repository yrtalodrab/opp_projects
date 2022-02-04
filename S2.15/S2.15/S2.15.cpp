#include <iostream>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");


    double a, b;
    cout << "Введите число а и b" << endl;
    cin >> a >> b;
    cout << "Сумма :" << a + b << endl << "Разность :" << a - b << endl << "Произведения :" << a * b << endl << "Частное :" << a / b << endl;
}