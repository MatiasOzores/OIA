#include <iostream>
#include <string>
using namespace std;

void busca_perfectos(int num){
	int sum=0;
	
	
	for(int x = 1; x < num; x++){
		if(num % x == 0){
			sum+=x;
		}
	}
	
	if(sum == num){
		cout << "El numero '" << num << "' es perfecto." << endl;
	}

}

int main()
{

	int N;

	cin >> N;
	
	for(int x = 1; x <= N; x++){
		busca_perfectos(x);
	}
	
	return 0;
}

