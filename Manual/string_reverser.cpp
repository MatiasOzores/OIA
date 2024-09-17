#include <iostream>
#include <string>
using namespace std;

string reverser(string palabra){

	string resultado;
	int longitud = palabra.size();
	
	for(int x = 0; x < longitud; x++){
		resultado+= palabra[palabra.size()-x-1];
	}
	
	return resultado;
}

int main()
{
	string palabra;
	
	cin >> palabra;
	
	cout << reverser(palabra);
	
	
	return 0;
}

