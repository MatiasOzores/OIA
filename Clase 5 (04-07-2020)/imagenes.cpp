#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	// Leer por archivos
	ifstream cin("imagenes.in");
	ofstream cout("imagenes.out");
	
	
	string imagenSC; 
	cin >> imagenSC;
	
	string imagenC;
	cin >> imagenC;
	
	string resultado1, resultado2;
	
	int tamSC = imagenSC.size();
	int tamC = imagenC.size();
	// Comprimiendo imagen

	for (int i = 0; i < tamSC; i++) {
		int count = 1;  // Empezamos con el primer carácter ya contado
		char letra = imagenSC[i];

		for (int j = i + 1; j < tamSC; j++) {
			if (imagenSC[j] == letra) {
				count++;
			} else {
				break;
			}
		}

		if (count > 4) {
			cout << "(" << letra << count << ")";
			i += count - 1;  // Saltamos los caracteres ya contados
		} else {
			for (int k = 0; k < count; k++) {
				cout << letra;
			}
			i += count - 1; // Ajuste de índice para evitar repeticiones
		}
	}
	
	cout << endl;
	// Descomprimiendo imagen
	for (int i = 0; i < tamC; i++)
	{
		char letra;
		string repeticionSTR = "";
		int repeticiones = 0;
		
		if((imagenC[i] >= 65 && imagenC[i] <= 90) && (imagenC[i+1] >= 48 && imagenC[i+1] <= 57) && (imagenC[i+2] >= 48 && imagenC[i+2] <= 57) && (imagenC[i+3] >= 48 && imagenC[i+3] <= 57)){
			letra = imagenC[i];
			repeticionSTR = string(1, imagenC[i+1]) + string(1, imagenC[i+2]) + string(1, imagenC[i+3]);
			repeticiones = stoi(repeticionSTR);
		}
		
		else if((imagenC[i] >= 65 && imagenC[i] <= 90) && (imagenC[i+1] >= 48 && imagenC[i+1] <= 57) && (imagenC[i+2] >= 48 && imagenC[i+2] <= 57) ){
			letra = imagenC[i];
			repeticionSTR = string(1, imagenC[i+1]) + string(1, imagenC[i+2]);
			repeticiones = stoi(repeticionSTR);
		}
		
		else if((imagenC[i] >= 65 && imagenC[i] <= 90) && (imagenC[i+1] >= 48 && imagenC[i+1] <= 57) ){
			letra = imagenC[i];
			repeticionSTR = string(1, imagenC[i+1]) ;
			repeticiones = stoi(repeticionSTR);
		}
		
		else if(imagenC[i] >= 65 && imagenC[i] <= 90){
			cout << imagenC[i];
		}
		
		if(repeticiones != 0){
			for (int x = 0; x < repeticiones; x++)
			{
				cout << letra;
			}		
		}

		
	}
	
	
	return 0;
}

