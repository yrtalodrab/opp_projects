#include <cmath>
#include <iostream>

int main()
{

    //Среднее арифметическое
    using namespace std;

    setlocale(LC_ALL, "rus");

    /*double a, b;
    double average;

    cout << "Введите 3 числа: " << endl;

    cin >> a >> b ;

    average = fabs((double)(a + b) / 2);

    cout << "Среднее арифметическое :" << average; 
    */


    //Среднее геометрическое 

    double a, b, c, sum;
    double geometricMean;

    cout << "Введите 3 числа: " << endl;

    cin >> a >> b;

    sum = a * b;
    geometricMean = fabs ( sqrt (sum));
    cout << "Среднее геометрическое : " << geometricMean;

}