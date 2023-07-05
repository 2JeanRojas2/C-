#include<iostream>

using namespace std;

int main()
{
	int lado;
	int superficie;
	
	cout << "Ingrese el valor del area del cuadrado: ";
	cin >> lado;

	superficie = lado * lado;

	cout << "La superficie del cuadrado es: ";
	cout << superficie;

	return 0;
}