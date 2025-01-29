#include <iostream>
#include <string>

using namespace std;

int main(){

	string palabra;
	cin >> palabra;
	int numero;
	cin >> numero;
	
	int tam = palabra.size();
	
	for(int x = 0; x < tam; x++){
		if(x == numero-1){
			cout << "X";
		}
		
		else{
			cout << palabra[x];
		}
	}
	
	
	return 0;
}
