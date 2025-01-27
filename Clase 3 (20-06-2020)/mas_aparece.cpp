#include <iostream>
#include <vector>

using namespace std;

int main(){

	int masAparece, cantidad = 0;

	int N;
	cin >> N;
	
	vector<int> v(N);
	
	// Entrada de datos
	
	for(int x = 0; x < N; x++){
		cin >> v[x];
	}
	
	// Verificacion
	
	for(int x = 0; x < N; x++){
		int cantTemporal = 0;
		for(int y = 0; y < N; y++){
			if(v[x] == v[y]){
				cantTemporal++;
			}
		}
		
		if(cantTemporal >= cantidad){
			masAparece = v[x];
			cantidad = cantTemporal;
		}
	}
	
	cout << masAparece << " " << cantidad; 
	
	


	return 0; 
}
