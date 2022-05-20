#include <iostream>
#include <stdio.h>
using namespace std;

float descuento(float cant)
{
	float x;

	if (cant > 10000)
	{
		x = cant * 0.25;

		return x;
	}
	else
	{
		x = cant * 0.10;

		return x;
	}
}
int main ()
{
	float cant;

	cout<<"Ingrese la cantidad del producto."<<endl;
	cin>>cant;
	cout<<"El descuento de la cantidad del producto es de: "<<descuento(cant)<<" Quetzales"<<endl;

	system("pause");
	return 0;
}


