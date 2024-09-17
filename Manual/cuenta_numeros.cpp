#include <iostream>
#include <vector>
using namespace std;

int cuenta_numeros(vector<int> v){
	int cantidad=0;
	int total = v.size();
	
	for(int x = 0; x < total; x++){
		if(v[x] >= 1 && v[x] <= 10){
			cantidad++;
		}
	}
	
	return cantidad;
}

int main()
{

	int N;	
	cin >> N;
	vector<int> v(N);
	
	for(int x = 0; x < N; x++){
		cin >> v[x];
	}
	
	cout << cuenta_numeros(v);
	
	
	return 0;
}

