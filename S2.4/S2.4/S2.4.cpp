#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");

    int x = 0, r = 6350, u = 90, f = 0, d = 0;;

    cout << "Введите радиус окружности ";
    cin >> x;
    f = r + x;
    cout << sqrt(f * f - r * r) << endl;

    system("pause");
}