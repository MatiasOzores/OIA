#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int N;
	cin >> N;
	
	vector<int> v(N);
	
	int cantidad = 0;
	// Entrada de datos
	
	for(int x = 0; x < N; x++){
		cin >> v[x];
	}
	
	
	// Verificacion de numeros del 1 al 10 (se imprime a medida que se va registrando)

	for(int i = 1; i <= 10; i++){
		for(int x = 0; x < N; x++){
			if(i == v[x]){
				cantidad++;
			}
		}
		cout << cantidad << endl;
		cantidad = 0;
	}
	
	return 0;
}
