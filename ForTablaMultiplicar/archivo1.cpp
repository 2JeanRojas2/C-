#include<iostream>

using namespace std;

int main()
{
	int f, valor;
	cout << "Ingrese un valor entre 1 y 10:";
	cin >> valor;
	for (f = valor; f <= valor * 12; f = f + valor)
	{
		cout << f;
		cout << "-";
	}
	return 0;
}