#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
// https://cses.fi/problemset/task/1640

int main()
{

	int n, x;
	cin >> n >> x;
	map<int, int> registro; // indice - valor
	
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
	
		if(registro.find(x - num) != registro.end()){
			cout << i+1 << " " << registro[x-num] + 1;
			return 0; 
		}
		
		registro[num] = i;
	}	
	
	cout << "IMPOSSIBLE";
	return 0;
}

