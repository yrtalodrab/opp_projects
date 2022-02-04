#include <iostream>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");



    double ageTanya, ageMyti, mean, differenceTanya, differenceMyti;


    cout << "Возраст Тани" << endl;
    cin >> ageTanya;
    cout << "Возраст Мити" << endl;
    cin >> ageMyti;

    mean = (ageTanya + ageMyti) / 2;

    cout << "Среднее значение: " << mean << endl;

    differenceTanya =  mean / ageTanya;
    differenceMyti = mean / ageMyti;

    cout << "Отличие в возрасте: " 
        << endl 
        << "Таня в " << differenceTanya <<" раз"
        << endl
        << "Мити в " << differenceMyti << " раз"
        ;


}