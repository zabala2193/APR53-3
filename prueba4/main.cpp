#include <iostream>

using namespace std;

    int main() {
	int cantidad;
	int horas=0;
	int minutos=0;
	int segundos=0;
    cout << "ingrese tiempo en segundos" << '\240' << endl;
    unsigned int n = 2147483649;
    cout << n;
	cin >> cantidad;
	if (cantidad < 60) {
        cout << horas << " Horas " << minutos << " Minutos " << cantidad << " Segundos " << endl;
	}
	if (cantidad > 60 && cantidad <3600 ) {

	}
	horas = (cantidad/3600);
	cantidad = (cantidad/3600);
	minutos = ((cantidad * horas * 3600) / 60) ;
    segundos = cantidad * (horas * 3600 + minutos * 60);
	cout << horas << " Horas " << minutos << " Minutos " << segundos << " Segundos " << endl;
	return 0;
}
