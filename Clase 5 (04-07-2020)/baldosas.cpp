#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;
int main()
{
	
	ifstream cin("baldosas.in");
	ofstream cout("baldosas.out");
	
	string cadena;
	cin >> cadena;
	int tam = cadena.size();
	vector<char> v(tam);
	for (int i = 0; i < tam; i++)
	{
		v[i] = cadena[i];
	}
	
	int pos;
	for (int i = 0; i < tam; i++)
	{
		if(v[i] != '*'){
			pos = i;
		}
	}
	
	for (int i = pos; i >= 0; i-=3)
	{
		v[i] = v[pos];
	}
	
	for (int i = pos; i < tam; i+=3)
	{
		v[i] = v[pos];
	}
	
	char variante1,variante2;
	if(v[pos] == 'V'){
		variante1 = 'R';
		variante2 = 'A';
	}
	
	else if(v[pos] == 'R'){
		variante1 = 'V';
		variante2 = 'A';
	}
	
	else if(v[pos] == 'A'){
		variante1 = 'V';
		variante2 = 'R';
	}
	
	// Segunda variante
	
	for (int i = pos+1; i >= 0; i-=3)
	{
		v[i] = variante1;
	}
	
	for (int i = pos+1; i < tam; i+=3)
	{
		v[i] = variante1;
	}
	
	// Tercera variante
	
	for (int i = pos+2; i >= 0; i-=3)
	{
		v[i] = variante2;
	}
	
	for (int i = pos+2; i < tam; i+=3)
	{
		v[i] = variante2;
	}
	
	for (int i = 0; i < tam; i++)
	{
		cout << v[i];
	}
	
	
	


	
	
	
	
	
	return 0;
}

