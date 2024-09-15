#include <iostream>
#include <string>
using namespace std;

int pares_impares(int N){
	int resultado, pares=0, impares=0;
	
	for(int x = 1; x <= N; x++){
		if(x % 2 == 0){
			pares+=x;
		}
		
		else{
			impares+=x;
		}
	}
	
	resultado = pares - impares;

	return resultado;
}


int main()
{
	int N;
	
	cin >> N;
	
	cout << pares_impares(N);
	
	return 0;
}

