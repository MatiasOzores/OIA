#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>

using namespace std;

int main(){

	int N;
	cin >> N;
	vector<string> v(N);
	
	for(int x = 0; x < N; x++){
		cin >> v[x];
	}
	
	
	// Pasando todo a minusculas
	for(int x = 0; x < N; x++){
		for(int y = 0; y < int(v[x].size()); y++){
			v[x][y] = tolower(v[x][y]); 
		}
	
	}
	
	for(int x = 0; x < N; x++){
		for(int y = 0; y < int(v[x].size()); y++){
			if(v[x][0] == v[x][int(v[x].size())-1]){
				cout << v[x] << endl;
				break;
			}
		}
	}



	return 0;
}
