#include <cmath>
#include <iostream>

int main()
{   
    setlocale(LC_ALL, "rus");
    using namespace std;

    double a;
    double v;
    double s;
    
    cout << "Ввести длину ребра: ";
    cin >> a;

    v = pow(a, 3);

    s = 6 * pow(a, 2);

    cout << "Объем куба равен:" << v << endl;
    cout << "Площадь его боковой поверхности равна: " << s;
}