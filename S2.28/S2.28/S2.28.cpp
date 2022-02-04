#include <iostream>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");


    double C, F = 450;

    C = (F - 32) * 5 / 9;

    cout << "Темпиратура по Цельсия равна : " << C;

}