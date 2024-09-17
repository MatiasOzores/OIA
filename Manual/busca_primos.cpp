#include <iostream>
#include <string>
using namespace std;

void busca_primos(int num){
	bool esPrimo = true;
	
	for(int x = 2; x < num; x++){
		if(num % x == 0){
			esPrimo = false;
		}
	}
	
	if(esPrimo){
		cout << "El numero '" << num << "' es primo." << endl;
	}
}

int main()
{
	int N;
	cin >> N;
	for(int x = 1; x <= N; x++){
		busca_primos(x);
	}
		
	return 0;
}

