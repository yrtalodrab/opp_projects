#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int ax = 0;
	int axy = 50;
	int ay = 100;
	int bx;
	int bxy;
	int by;

	cout << "Ввести координату bx: ";
	cin >> bx;
	if (bx <= ay) {
		if (bx <= axy) {
			if (bx >= ax) {
				cout << "Прямоугольники пересеклись" << endl << "Ввести координату bxy: ";
				cin >> bxy;
				if (bxy <= ay) {
					if (bxy >= axy) {
						if (bxy >= ax) {
							cout << "Треугольник В вошел на половину в треугольник А"<< endl << "Ввести координату by: ";
							cin >> by;
							if (by <= ay) {
								if (by <= axy) {
									if (by >= ax) {
										cout << "Треугольник В вошел в треугольник А" << endl;
									};
								}
							}
						};
					}
				}
			}; 
		}
	} else {
		cout << "Прямоугольники не пересекаются" << endl;
	};





















	//bxy
	/*if(bxy <= ay) {
		cout << "Прямоугольники пересекается" << endl;
	}
	else if (bxy == axy) {
		cout << "Прямоугольники пересекается" << endl;
	}
	else if (bxy > ax) {
		cout << "Прямоугольники пересекается" << endl;
	};



	//by
	if (by == ay) {
		cout << "Прямоугольники пересекается" << endl;
	}
	else if (by >= axy) {
		cout << "Прямоугольники пересекается" << endl;
	}
	else if (by >= ax) {
		cout << "Прямоугольники пересекается" << endl;
	};*/

}