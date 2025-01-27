#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string palabra;
	cin >> palabra;
	int tam = palabra.size();
	for(int x = tam-1; x >= 0; x--){
		cout << palabra[x];
	}

	return 0;
}
