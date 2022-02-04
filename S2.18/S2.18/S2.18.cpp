#include <iostream>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");


    double a, b, d, p;
    cout << "Введите боковую сторону :" << endl;
    cin >> a;

    cout << "Введите два значения высоты" << endl;
    cin >> b >> d;

    p = (2 * a) + b + d;

    cout << "Периметр равнобедренной трапеции равен :" << p;
}