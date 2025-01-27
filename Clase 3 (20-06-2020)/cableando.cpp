#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

	int N;
	cin >> N;
	
	int central;
	cin >> central;
	
	vector<int> v(N);

	for(int x = 0; x < N; x++){
		cin >> v[x];
	}
	
	sort(v.begin(), v.end());
	
	int resultado;
	
	if(central < v[0]){
		resultado = v[int(v.size()-1)] - central;
	}
	
	else if(central > v[int(v.size()-1)]){
		resultado = central - v[0];
	}
	
	else{
		resultado = (central - v[0]) + (v[int(v.size()-1)] - central);
	}


	cout << resultado;

	return 0;
}
