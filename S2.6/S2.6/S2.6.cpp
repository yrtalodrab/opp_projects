#include <iostream>

int main()
{

    setlocale(LC_ALL, "rus");
    using namespace std;

    double R;
    double R2;
    double L;
    double S;
    float P = 3.14;

    cout << "Введите радиус окружности :";
    cin >> R;

    L = R * P;

    cout << "Длина окружности равна: " << L << endl;

    R2 = R / 2;
    S = P * pow(R2, 2);

    cout << "Площадь круга равна: " << S;
}