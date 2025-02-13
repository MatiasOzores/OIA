#include <iostream>
#include <map>
#include <vector>
using namespace std;
// https://codeforces.com/problemset/problem/467/A

int main()
{
	vector<pair<int,int>> habitaciones; 
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int cantPersonas, maxPersonas;
		cin >> cantPersonas >> maxPersonas;
		habitaciones.push_back(make_pair(cantPersonas,maxPersonas));
	}
	
	int cantDisponibles = 0;
	
	for (int i = 0; i < n; i++)
	{
		if(habitaciones[i].second - habitaciones[i].first >= 2){
			cantDisponibles++;
		}
	}
	
	cout << cantDisponibles;
	
	return 0;
}

