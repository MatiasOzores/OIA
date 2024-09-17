#include <iostream>
#include <string>
using namespace std;

void convertir(string palabra){
	
	int longitud = palabra.size();
	
	for(int x = 0; x < longitud + 2; x++){
		cout << "*";
		if(x == longitud+1){
			cout << endl;
		}	
	}
	
	cout << "*" + palabra + "*";
	cout << endl;
	
	for(int x = 0; x < longitud + 2; x++){
		cout << "*";
		if(x == longitud+1){
			cout << endl;
		}	
	}	
	
}

int main()
{

	string palabra;
	
	cin >> palabra;
	
	convertir(palabra);
	
	return 0;
}

