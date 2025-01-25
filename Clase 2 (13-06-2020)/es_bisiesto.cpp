#include <iostream>
using namespace std;
int main(){
	
	int a;
	bool esBisiesto = false;
	cin >> a;
	
	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
        esBisiesto = true;
    }
	
	// ----------------
	
	if(esBisiesto){
		cout << "SI";
	}
	
	else{
		cout << "NO";
	}
	
	
	return 0;
}
