#include <iostream>
#include <string>

using namespace std;

string es_bisiesto(int anio){
	
	string mensaje;
	
	if(anio % 400 == 0){
		mensaje = "Es bisiesto";
	}
	
	else if(anio % 100 == 0){
		mensaje = "No es bisiesto";
	}
	
	else if(anio % 4 == 0){
		mensaje = "Es bisiesto";
	}
	
	else{
		mensaje = "No es bisiesto";
	}
	
	return mensaje;
}

int main()
{
	int anio;
	
	cin >> anio;
	
	cout << es_bisiesto(anio);
	
	return 0;
}

