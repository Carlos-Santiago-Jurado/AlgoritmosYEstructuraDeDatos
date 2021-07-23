
#include<iostream>
#include<cmath>
using namespace std;
// calcula el area
int main() {
	float area;
	float cat1;
	float cat2;
	float hip;
	float l1;
	float l2;
	float l3;
	// cargar datos
	cout << "Ingrese el lado 1:" << endl;
	cin >> l1;
	cout << "Ingrese el lado 2:" << endl;
	cin >> l2;
	cout << "Ingrese el lado 3:" << endl;
	cin >> l3;
	// encontrar la hipotenusa (mayor lado)
	if (l1>l2) {
		cat1 = l2;
		if (l1>l3) {
			hip = l1;
			cat2 = l3;
		} else {
			hip = l3;
			cat2 = l1;
		}
	} else {
		cat1 = l1;
		if (l2>l3) {
			hip = l2;
			cat2 = l3;
		} else {
			hip = l3;
			cat2 = l2;
		}
	}
	// ver si cumple con Pitagoras
	if (pow(hip,2)==pow(cat1,2)+pow(cat2,2)) {
		// calcualar area
		area = (cat1*cat2)/2;
		cout << "El area es: " << area << endl;
	} else {
		cout << "No es un triangulo rectangulo." << endl;
	}
	return 0;
}

