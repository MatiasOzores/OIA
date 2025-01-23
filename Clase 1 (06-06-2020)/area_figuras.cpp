#include <iostream>
#include <string>

using namespace std;
int main(){
	
	string figura;
	cin >> figura;
	
	if(figura == "cuadrado"){
		int lado;
		cin >> lado;
		cout << lado*lado;
	}
	
	else if(figura == "rectangulo"){
		int lado1, lado2;
		cin >> lado1 >> lado2;
		cout << lado1 * lado2;
	}
	
	else if(figura == "cubo"){
		int lado;
		cin >> lado;
		cout << 6*(lado*lado);
	}	

	else if(figura == "caja"){
		int ancho, largo, alto;
		cin >> ancho >> largo >> alto;
		cout << 2 * (largo * ancho + largo * alto + ancho * alto);
	}
		
	return 0;
}
