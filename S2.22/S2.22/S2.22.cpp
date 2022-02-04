#include <iostream>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");

    double kg1apple = 800, 
        kg1cookies = 900, 
        kg1candyes = 980, 
        kgapple, 
        kgcookies, 
        kgcandyes, 
        summ;

    cout << "Ввести количество яблок (в кг)" << endl;
    cin >> kgapple;
    cout << "Ввести количество печенья (в кг)" << endl;
    cin >> kgcookies;
    cout << "Ввести количество конфет (в кг)" << endl;
    cin >> kgcandyes;

    summ = (kgapple * kg1apple) + (kgcookies * kg1cookies) + (kgcandyes * kg1candyes);

    cout << "Стоимость яблок: " << kgapple * kg1apple << endl
        << "Стоимость печенья: " << kgcookies * kg1cookies << endl
        << "Стоимость конфет: " << kgcandyes * kg1candyes << endl
        << "общая стоимость: " << summ;
}