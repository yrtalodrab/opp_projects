#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");


    double x1, x2, x3, y1, y2, y3;
    double S, P;
    double xy1, xy2, xy3, xyAll,half;

    cout << "Введите координаты первой вершины :" << endl;
    cin >> x1 >> y1;

    cout << "Введите координаты второй вершины :" << endl;
    cin >> x2 >> y2;

    cout << "Введите координаты третьей вершины :" << endl;
    cin >> x3 >> y3;

    xy1 = sqrt(sqrt(x1 - x2) + sqrt(y1 - y2));
    xy2 = sqrt(sqrt(x2 - x3) + sqrt(y2 - y3));
    xy3 = sqrt(sqrt(x3 - x1) + sqrt(y3 - y1));

    cout << xy1 << endl << xy2 << endl << xy3 << endl;



    P = xy1 + xy2 + xy3;

    half = P / 2;

    S = sqrt(half * (half - xy1) * (half - xy1) * (half - xy1));

    cout << "Периметр: " << P << endl << "Площадь" << S; 

}