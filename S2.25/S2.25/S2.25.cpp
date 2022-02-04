#include <iostream>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");



    const int v1=80, v2=120;
    double s, vsumm;

    cout << "Введите расстояние между автомобилями" << endl;

    cin >> s;
    
    vsumm = v1 + v2;

    cout << "Время, через которое автомобили встретяться друг с другом равнается :" << s / vsumm ;
    
}