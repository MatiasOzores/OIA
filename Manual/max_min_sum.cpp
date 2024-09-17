#include <iostream>
#include <string>
using namespace std;

void max_min_sum(int N){
	int max,min,sum=0,num;
	
	for(int x = 0; x < N; x++){
		cin >> num;
		
		if(x == 0){
			min = num;
			max = num;
		}
		
		if(min > num){
			min = num;
		}
		
		if(max < num){
			max = num;
		}
		
		sum+=num;
	}
	
	cout << "El numero mas grande es el: " << max << endl;
	cout << "El numero mas chico es el: " << min << endl;
	cout << "El resultado de la suma es: " << sum;
	
	
}

int main()
{
	int N;
	cin >> N;
	
	max_min_sum(N);
	
	return 0;
}

