#include<iostream>

using namespace std;

int main() {

	int num1, num2, num3, num4, suma, producto;
	cout << "Ingrese el primer numero: ";
	cin >> num1;
	cout << "Ingrese el segundo numero: ";
	cin >> num2;
	cout << "Ingrese el tercer numero: ";
	cin >> num3;
	cout << "Ingrese el cuarto numero: ";
	cin >> num4;
	suma = num1 + num2 + num3 + num4;
	producto = suma / 4;
	cout << "La suma de los numeros es: ";
	cout << suma;
	cout << "\n";
	cout << "El promedio de los numeros es: ";
	cout << producto;
	return 0;

}