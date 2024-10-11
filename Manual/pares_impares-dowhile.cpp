#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int N,x=1, sumPares = 0, sumImpares = 0;
	
	cin >> N;
	
	// ejercicio que pide uso obligatorio del do-while
	do{
		
		if(x % 2 == 0){
			sumPares+=x;
		}
		
		else{
			sumImpares+=x;
		}
		
	x++;
	}while(x <= N );
	
	cout << sumPares - sumImpares;
}
