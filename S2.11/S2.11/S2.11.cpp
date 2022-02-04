#include <cmath>
#include <iostream>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");



    double a, b, c;
    cout << "Введите катет a :" << endl;
    cin >> a;

    cout << "Введите катет b :" << endl;
    cin >> b;

    c = sqrt((pow(a, 2) + pow(b, 2)));
    cout << "Гипотенуза прямоугольного треуголника равна:" << c;

}