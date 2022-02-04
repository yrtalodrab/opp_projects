#include <iostream>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");


    int T;

    cout << "Введите темпиратуру: " << endl;
    cin >> T;

    cout << "Температура по шкале Фаренгейта :" << (T * 1.8) + 32 << endl
        << "Температура по шкале Кельвина :" << T + 273, 15;
}