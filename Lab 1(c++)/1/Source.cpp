#include "Header.h"

int main() {
	setlocale(LC_CTYPE, "ukr");
	Kvadrat koordunata;

	cout << "¬ведiть х0: ";
	cin >> koordunata.x0;
	cout << "¬ведiть y0: ";
	cin >> koordunata.y0;
	cout << "¬ведiть x1: ";
	cin >> koordunata.x1;
	cout << "¬ведiть y1: ";
	cin >> koordunata.y1;
	cout << "¬ведiть х2: ";
	cin >> koordunata.x2;
	cout << "¬ведiть y2: ";
	cin >> koordunata.y2;
	cout << "¬ведiть х3: ";
	cin >> koordunata.x3;
	cout << "¬ведiть y3: ";
	cin >> koordunata.y3;

	std::cout << "A(" << koordunata.x0 << ";" << koordunata.y0 << ") B(" << koordunata.x1 << 
		";" << koordunata.y1 << ") C(" << koordunata.x2 << ";" << koordunata.y2 << 
		") D(" << koordunata.x3 << ";" << koordunata.y3 << ")" << endl;
	double square = koordunata.Square();
	cout << "ѕлоща: " << square << endl;
	double perimetr = koordunata.Perimetr();
	cout << "ѕериметр: " << perimetr << endl;	
}

