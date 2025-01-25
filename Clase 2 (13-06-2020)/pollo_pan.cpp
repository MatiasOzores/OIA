#include <iostream>
#include <string>

using namespace std;
int main(){

	string palabra;
	cin >> palabra;
	int tam = palabra.size();
	
	for(int x = 0; x < tam + 2; x++){
		cout << "*";
	}

	cout << endl << "*" << palabra << "*" << endl;
	
	for(int x = 0; x < tam + 2; x++){
		cout << "*";
	}

	return 0;
}
