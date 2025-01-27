#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int suma(vector<int> v){
	int resultado=0;
	int tam = v.size();
	
	for(int x = 0; x < tam; x++){
		resultado+= v[x];
	}

	return resultado;
}

float promedio(vector<int> v){
	float tam = v.size();
	
	float resultado = suma(v) / tam;

	return resultado;
}

vector<int> orden(vector<int> v){
	
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	
	return v;
}

int main(){
	
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}

	cout << suma(v) << endl << promedio(v) << endl;
	
	vector<int> vOrdenado = orden(v);
	
	for(int x = 0; x < int(vOrdenado.size()); x++){
		cout << vOrdenado[x] << " ";
	}
	
	return 0;
}
