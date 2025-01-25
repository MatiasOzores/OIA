#include <iostream>
using namespace std;
int main(){

	int N;
	cin >> N;
	int pares = 0, impares = 0;
	
	for(int x = 0; x <= N; x++){
		if(x % 2 == 0){
			pares+=x;
		}
		
		else{
			impares+=x;
		}
	}
	
	cout << pares-impares;

	return 0;
}
