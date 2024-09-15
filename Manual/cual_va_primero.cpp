#include <iostream>
#include <string>
using namespace std;

string cual_va_primero(string palabra1, string palabra2){
	string mensaje; 
	
	if(palabra1 < palabra2){
		mensaje = "La palabra 1 viene primero";
	}
	
	else{
		mensaje = "La palabra 2 viene primero";		
	}


	return mensaje;
}

int main()
{
	string palabra1, palabra2;
	
	cin >> palabra1 >> palabra2;	
	
	cout << cual_va_primero(palabra1, palabra2);
	
	return 0;
}

