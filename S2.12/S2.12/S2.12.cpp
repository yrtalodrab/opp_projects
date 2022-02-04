#include <iostream>
#include <cmath> 
int main()
{
    setlocale(LC_ALL, "rus");
    using namespace std;

    double r1, r2, s;

    cout << "Введите внешний радиус" << endl;
    cin >> r1;

    cout << "Введите внутренний радиус" << endl;

    cin >> r2;

    s = r1 * r1 * 3, 14 - r2 * r2 * 3, 14;
    cout << "Площадь окружности равна: " << s;

}