#include <iostream>

int main()
{

    using namespace std;
    setlocale(LC_ALL, "rus");

    double m, v, p;
    
    cout << "Введите значение m (массы): " << endl;
    cin >> m;

    cout << "Введите значение v (объем): " << endl;
    cin >> v;

    p = m / v;

    cout << "Плотность материала : " << p;

}