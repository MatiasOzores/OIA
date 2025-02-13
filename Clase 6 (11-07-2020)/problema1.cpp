#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <utility>
using namespace std;
// https://cses.fi/problemset/task/1069


int longestRepetition(string cadena, set<char> lista){
	int  tam = cadena.size();
	pair<char, int> resultado;
	resultado.second = 0;
	
	for (char letra : lista)
	{
			int contadorTemp = 0;
			int contadorTempMax = 0;

			for (int i = 0; i < tam; i++)
			{
				if(letra == cadena[i]){
					contadorTemp++;
					if(contadorTemp >= contadorTempMax){
						contadorTempMax = contadorTemp;
					}	
				}
				
				else{
					contadorTemp = 0;
				}
			}
			
			if(contadorTempMax >= resultado.second){
				resultado.second = contadorTempMax;
				resultado.first = letra;
			}
	}
	
	return resultado.second;
}

int main()
{

	string cadena;
	set<char> lista;
	cin >> cadena;
	int tam = cadena.size();
	
	for (int i = 0; i < tam; i++)
	{
		lista.insert(cadena[i]);
	}
	
	cout << longestRepetition(cadena,lista);
	
	
	return 0;
}
