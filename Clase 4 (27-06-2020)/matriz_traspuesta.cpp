#include <iostream>
#include <vector>

using namespace std;

int main(){

	int N,M;
	cin >> N >> M;
	
	int matriz[N][M];
	
	for(int x = 0; x < N; x++){
		for(int y = 0; y < M; y++){
			cin >> matriz[x][y];
		}
	}
	
	// Creando y rellenando matriz traspuesta
	
	int matrizT[M][N];
	
	for(int x = 0; x < M; x++){
		for(int y = 0; y < N; y++){
			matrizT[x][y] = matriz[y][x];
		}
	}

	// Mostrando matriz
	
	for(int x = 0; x < M; x++){
		for(int y = 0; y < N; y++){
			cout << matrizT[x][y] << " ";
		}
		cout << endl;
	}

	return 0;
}
