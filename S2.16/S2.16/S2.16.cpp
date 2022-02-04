#include <iostream>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");


    double a, b, c, V, S;

    cout << "Введите длины сторон прямоугольного параллелепипеда: " << endl;
    cin >> a >> b >> c;

    V = a * b * c;

    S = 2 * (a * c + b * c);

    cout << "Объем :" << V << endl << "Площадь боковой поверхности: " << S;

}