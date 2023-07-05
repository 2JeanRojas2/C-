#include<iostream>

using namespace std;

int main() {

	int mayores, menores, n, notas;

	n = 1;


	while (notas <= 10) {
		cout << "Ingrese la nota" >>
			cin >> notas;
		if (notas >= 7) {
			mayores = mayores + 1;
		}
		else {
			menores = menores + 1;
		}
		cout << "Los alumnos con nota mayor a 7: " + mayores; >>
			cout << "Los alumnos con nota menor a 7:" + menores; >>
	}
}