#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");


    const int v1 = 125, v2 = 110;
    int t = 30;
    double s;
    
    cout << "Введите расстояние : " << endl;

    cin >> s;


    cout << "Расстояние будет между ними через 30 минут после того, как первый автомобиль опередил второй : "
        << endl
        << s + (v1 / 2) - (v2 / 2);

}