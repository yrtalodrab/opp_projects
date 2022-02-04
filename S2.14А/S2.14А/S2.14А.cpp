#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");


    double a, b, c, d, p, da;

    cout << "Введите значения сторон прямоугольника" << endl;
    cin >> a >> b >> c >> d;

    p = a + b + c + d;
    da = sqrt((pow(a, 2) + pow(b, 2)));
    cout << "Периметр прямоугольника равен:" << p << endl;
    cout << "Диагональ прямоугольника равна:" << da << endl;

}