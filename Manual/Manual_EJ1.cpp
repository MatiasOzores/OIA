#include <iostream>
using namespace std;

int suma(int N){
	int resultado=0;
	
	for(int x = 1; x <= N; x++){
		resultado += x;
	}
	
	return resultado;
}

int main()
{
	int N,resultado;
	
	cin >> N;
	resultado = suma(N);
	cout << resultado;
}


