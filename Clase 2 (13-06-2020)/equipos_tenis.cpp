#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	
	int A,B,C,D, resultado;
	cin >> A >> B >> C >> D;
	vector<int> v = {A,B,C,D};
	sort(v.begin(), v.end());
	resultado = (v[3] + v[0]) - (v[1] + v[2]);
	
	// En el caso de que la diferencia nos de negativo
	if(resultado < 0){
		resultado = resultado * (-1);
	}
	
	cout << resultado;
	

	return 0;
}
