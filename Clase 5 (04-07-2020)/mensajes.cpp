#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

pair<string, char> mensajes(vector<char> v, string palabra)
{
	int tamV = v.size();
	pair<string,char> resultado;
	
	string oculta;
	
	for (int i = 0; i < tamV; i++)
	{
		oculta.push_back(v[i]);
	}
	
	size_t encontrar = oculta.find(palabra);
	
	if(encontrar != string::npos){
			resultado.first  = "SI";
			resultado.second = 'I';
	}
	
	else{
		string ocultaInvertida = oculta;
		reverse(ocultaInvertida.begin(), ocultaInvertida.end());
		encontrar = ocultaInvertida.find(palabra);
		
		if(encontrar != string::npos){
			resultado.first  = "SI";
			resultado.second = 'D';
		}
		
		else{
			resultado.first  = "NO";
		}
	}
	
	return resultado;
}

int main()
{
	ifstream cin("mensajes.in");
	ofstream cout("mensajes.out");
	
	int L;
	cin >> L;
	vector<char> v(L);
	
	for (int i = 0; i < L; i++)
	{
		cin  >> v[i];
	}
	
	string palabra; 
	cin >> palabra;
	
	pair<string, char> resultado = mensajes(v,palabra);
	cout << resultado.first << endl;
	if (resultado.first == "SI") {
		cout << resultado.second << endl;
	}

		
	return 0;
}
