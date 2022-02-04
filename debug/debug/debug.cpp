#include <iostream>
int main()
   
{
    setlocale(LC_ALL, "rus");

    using namespace std;
    const float pi = 3.14;
    float r, c, s;
    cout << "Введите значение радиуса: " << endl;
    cin >> r;
    cout << "Площадь равна: " << pi * pow(r, 2) << endl << "Длина равна: " << 2 * pi * r << endl;
}