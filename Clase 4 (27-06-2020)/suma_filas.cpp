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
	
	int suma=0;
	
	for(int x = 0; x < N; x++){
		for(int y = 0; y < M; y++){
			suma+=matriz[x][y];
		}
		cout << suma << " ";
		suma = 0;
	}
	
	cout << endl;
	
	for(int x = 0; x < M; x++){
		for(int y = 0; y < N; y++){
			suma+=matriz[y][x];
		}
		cout << suma << " ";
		suma = 0;
	}

	return 0; 
}
