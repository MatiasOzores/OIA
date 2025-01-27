#include <iostream>
using namespace std;
int main(){
	
	int N;
	cin >> N;
	
	for(int x = 1; x <= N; x++){
		int divisores = 0;
		
		for(int y = 1; y <= N; y++){
			if(x % y == 0){
				divisores++;
			}
		}
		
		if(divisores == 2){
			cout << x << endl;
			divisores = 0;
		}
	}
	
	return 0; 
}
