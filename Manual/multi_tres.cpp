#include <iostream>
#include <string>
using namespace std;

string multi_tres(int numero){
	
	string mensaje;
	bool esMultiplo = false;
	
	for(int x = 0; x <= numero; x+=3){
		if(x == numero){
			esMultiplo = true;
		}
	}
	
	if(esMultiplo){
		string mensaje = "Es multiplo de 3";
	}
	
	else{
		mensaje = "No es multipo de 3";
	}
	
	return mensaje;
	
}

int main()
{
	int numero;
	
	cin >> numero;
	
	cout << multi_tres(numero);
	
	return 0;
}

