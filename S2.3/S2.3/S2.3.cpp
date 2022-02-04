#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");

    using namespace std;
    double r;
    double d;
    cout << "Радиус окружности: ";
    cin >> r;
    d = r * 2;
    cout << "Диаметр окруженности равен: " << d;

}
