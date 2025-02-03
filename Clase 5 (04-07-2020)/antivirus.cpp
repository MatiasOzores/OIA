#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;

int main()
{
	ifstream cin("antivirus.in");
	ofstream cout("antivirus.out");
	
	int N;
	cin >> N;
	
	char a,b;
	cin >> a >> b;
	
	vector<char> cadena(N);
	
	for (int i = 0; i < N; i++)
	{
		cin >> cadena[i]; 
	}
	
	for (int i = 0; i < N; i++)
	{
		if(cadena[i] == b && cadena[i-1] == a && cadena[i+1] == a){
			cadena[i] = 'E';
		}
	}
	vector<char> cadenaSalida;
	
	for (int i = 0; i < N; i++)
	{
		if(cadena[i] != 'E'){
			cadenaSalida.push_back(cadena[i]);
		}
	}
	
	// salida
	cout << int(cadenaSalida.size()) << endl;
	for (int i = 0; i < int(cadenaSalida.size()) ; i++)
	{
		cout << cadenaSalida[i];
	}
	
	
	return 0;
}

