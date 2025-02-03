#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{


	int N,M,K;
	cin >> N >> M >> K;
	vector<vector<char>> sopa(N, vector<char>(M));
	vector<string> palabras(K);
	
	for (int i = 0; i < N; i++)
	{	
		for (int j = 0; j < M; j++)
		{
			cin >> sopa[i][j];
		}
	}

	for (int i = 0; i < K; i++)
	{
		cin >> palabras[i];
	}
	
	
	
	for(int x = 0; x < K; x++){		// Recorre las palabras
		bool notExist = true;
		// Horizontal
		for(int y = 0; y < N; y++){ 	// Recorre filas
				string fila, filaInversa;
				for (int i = 0; i < M; i++) 	// Recorre columnas
				{
					fila.push_back(sopa[y][i]);
				}
				filaInversa = fila;
				reverse(filaInversa.begin(), filaInversa.end());
				
				size_t encontrar = fila.find(palabras[x]);
				size_t encontrarInversa = filaInversa.find(palabras[x]);
				if(encontrar != string::npos || encontrarInversa != string::npos){
					cout << "SI" << endl;
					notExist = false;
					break;
				}
		}
		
		// Vertical
		if(notExist){
			for(int y = 0; y < M; y++){ 	// Recorre columnas
					string columna, columnaInversa;
					for (int i = 0; i < N; i++) 	// Recorre filas
					{
						columna.push_back(sopa[i][y]);
					}
					columnaInversa = columna;
					reverse(columnaInversa.begin(), columnaInversa.end());
					
					size_t encontrar = columna.find(palabras[x]);
					size_t encontrarInversa = columnaInversa.find(palabras[x]);
					if(encontrar != string::npos || encontrarInversa != string::npos){
						cout << "SI" << endl;
						notExist = false;
						break;
					}
			}		
		}

	
		if(notExist){
			cout << "NO" << endl;
		}
	}
	
	return 0;
}
