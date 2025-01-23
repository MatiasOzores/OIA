#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){


	int A,B,C; 
	cin >> A >> B >> C;
	vector<int> v = {A,B,C};
	sort(v.begin(), v.end());

	for(int x = 0; x < int(v.size()); x++){
		cout << v[x] << " ";
	}
	
	return 0;
}
