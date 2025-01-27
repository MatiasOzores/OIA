#include <iostream>
#include <vector>
using namespace std;

int main(){

	// Leer datos
	int num = 0;
	bool repetidos = false;
	vector<int> v(0);
	
	while(true){
		cin >> num;
		
		if(num != 0){
			v.push_back(num);
		}
		
		else{
			break;
		}		
	}
	
	int tam = v.size();
	
	// Verificar si hay repetidos

	for(int x = 0; x < tam; x++){
		for(int y = x+1; y < tam; y++){
			if(v[x] == v[y]){
				repetidos = true;
			}
		}
	}
	
	// Devolver resultado
	
	if(repetidos){
		cout << "Hay repetidos"; 
	}
	
	else{
		cout << "No hay repetidos";
	}
	


	return 0;
}
