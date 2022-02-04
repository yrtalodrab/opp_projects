#include <iostream>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");

    double a, b;

    int x;

    cout << "Введите значение a: " << endl;
    cin >> a;

    cout << "Введите значение b: " << endl;
    cin >> b;

    x = - b / a;
    cout << "x = : " << x << endl;
}
