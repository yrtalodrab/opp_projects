#include <iostream>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");

    double m, v, p;

    cout << "Введите значение m (Количество): " << endl;
    cin >> m;

    cout << "Введите значение v (Площадь): " << endl;
    cin >> v;

    p = m / v;

    cout << "Плотность населения : " << p;
}