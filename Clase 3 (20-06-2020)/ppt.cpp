#include <iostream>
#include <string>

using namespace std;

int main(){

	string e1, e2;
	cin >> e1 >> e2;
	
	if((e1 == "Piedra" && e2 == "Tijera") || (e1 == "Papel" && e2 == "Piedra") || (e1 == "Tijera" && e2 == "Papel")){
		cout << "Ana";
	}
	
	else if((e2 == "Piedra" && e1 == "Tijera") || (e2 == "Papel" && e1 == "Piedra") || (e2 == "Tijera" && e1 == "Papel")){
		cout << "Bartolo";
	}
	
	else if(e1 == e2){
		cout << "Empate";
	}

	return 0;
}
