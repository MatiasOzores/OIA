#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

	int N;
	cin >> N;
	vector<int> v(N);
	
	for(int x = 0; x < int(v.size()); x++){
		cin >> v[x];
	}
	
	int max,min,sum = 0;
	
	for(int x = 0; x < int(v.size()); x++){
		sum+=v[x];
	}
	
	sort(v.begin(), v.end());
	
	min = v[0];
	max = v[int(v.size())-1];
	
	// Salida
	
	cout << max << endl << min << endl << sum;
	
	return 0;
}
