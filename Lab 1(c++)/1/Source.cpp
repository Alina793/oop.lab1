#include "Header.h"

int main() {
	setlocale(LC_CTYPE, "ukr");
	Kvadrat koordunata;

	cout << "����i�� �0: ";
	cin >> koordunata.x0;
	cout << "����i�� y0: ";
	cin >> koordunata.y0;
	cout << "����i�� x1: ";
	cin >> koordunata.x1;
	cout << "����i�� y1: ";
	cin >> koordunata.y1;
	cout << "����i�� �2: ";
	cin >> koordunata.x2;
	cout << "����i�� y2: ";
	cin >> koordunata.y2;
	cout << "����i�� �3: ";
	cin >> koordunata.x3;
	cout << "����i�� y3: ";
	cin >> koordunata.y3;

	std::cout << "A(" << koordunata.x0 << ";" << koordunata.y0 << ") B(" << koordunata.x1 << 
		";" << koordunata.y1 << ") C(" << koordunata.x2 << ";" << koordunata.y2 << 
		") D(" << koordunata.x3 << ";" << koordunata.y3 << ")" << endl;
	double square = koordunata.Square();
	cout << "�����: " << square << endl;
	double perimetr = koordunata.Perimetr();
	cout << "��������: " << perimetr << endl;	
}

