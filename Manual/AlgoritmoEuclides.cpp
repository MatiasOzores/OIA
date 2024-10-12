#include <iostream>
using namespace std;

int mcd(int a, int b){
	int resultado = 0;
	int residuo, aux;
	while(true){
		residuo = a % b;
		aux = b;
		if(residuo == 0){
			resultado = b;
			break;
		}
		
		b = residuo;
		a = aux;
		

	}
	
	return resultado;
}


int main(){

	int a,b;
	
	cin >> a >> b;
	cout << mcd(a,b);

	return 0;
}
