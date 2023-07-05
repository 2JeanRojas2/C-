#include<iostream>

using namespace std;

int main() {

	double valorProducto, total;
	int cantidadProductos;
	cout << "Ingrese el valor del producto: ";
	cin >> valorProducto;
	cout << "Ingrese la cantidad de productos: ";
	cin >> cantidadProductos;
	total = valorProducto * cantidadProductos;
	cout << "El total a pagar es: ";
	cout << total;
	return 0;

}