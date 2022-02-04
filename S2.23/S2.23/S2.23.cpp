#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_ALL, "rus");


	double monitor = 80000, keyspace = 10000, systemunit=200000, PC;

	PC = monitor + keyspace + systemunit;

	cout << "3 компьютера будут стоить " << PC * 3 << " тг";
}
