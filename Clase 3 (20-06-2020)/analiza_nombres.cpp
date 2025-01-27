#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	
	int N; 
	cin >> N;
	vector<string> v(N);
	
	int tam = 0;
	string nombreMasLargo;
	
	int cantidad = 0;
	string nombreMasAparece;
	
	// Entrada de datos
	for(int x = 0; x < N; x++){
		cin >> v[x];
	}
	
	// Verificacion
	for(int x = 0; x < N; x++){
		int cantidadTemp = 0;
		
		for(int y = 0; y < N; y++){
			if(v[y] == v[x]){
				cantidadTemp++;
			}
		}
		
		// Validacion de nombre mas aparece
		if(cantidadTemp >= cantidad){
			cantidad = cantidadTemp;
			nombreMasAparece = v[x];
		}
		
		// Validacion de nombre mas largo
		if(int(v[x].size()) >= tam){
			tam = v[x].size();
			nombreMasLargo = v[x];
		}
	}
	
	cout << nombreMasLargo << endl << nombreMasAparece;
	
	return 0;
}
