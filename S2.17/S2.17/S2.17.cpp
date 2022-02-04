#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");


    double x1, x2, y1,y2, d;


    cout << "Введите  координаты на плоскости двух точек :" << endl;

    cin >> x1 >> x2 >> y1 >> y2;
    d = sqrt((sqrt(x1 - x2)) + (sqrt(y1 - y2)));


    cout << "Расстояния между координатами :" << d;
}
