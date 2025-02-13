#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// https://codeforces.com/problemset/problem/507/A

int main()
{
	
	int n,k;
	cin >> n >> k;
	vector<pair<int,int>> instrumentos(n);
	for (int i = 0; i < n; i++)
	{
		cin >> instrumentos[i].first;
		instrumentos[i].second = i+1;
	}
	
	sort(instrumentos.begin(), instrumentos.end());
	
	int suma = 0, cantInstrumentos = 0;
	vector<int> resultado;
	for (int i = 0; i < n; i++)
	{
		if(suma+instrumentos[i].first <= k){
			resultado.push_back(instrumentos[i].second);
			suma+=instrumentos[i].first;
			cantInstrumentos++;
		}
		
		else{
			break;
		}
	}
	
	sort(resultado.begin(), resultado.end());
	cout << cantInstrumentos << endl;
	for (int i = 0; i < int(resultado.size()); i++)
	{
		cout << resultado[i] << " ";
	}
	
	return 0;
}

