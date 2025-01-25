#include <iostream>
using namespace std;

int main(){

	int A,B, resultado;
	cin >> A >> B;
	resultado = A*B;
	if(A > 9){
		cout <<  "  " << A;
	}
	
	else{
		cout << "   " << A;
	}
	
	cout << endl;
	cout << "x";
	
	if(B > 9){
		cout <<  " " << B;
	}
	
	else{
		cout << "  " << B;
	}	
	
	cout << endl;
	cout << "----" << endl;
	
	if(resultado > 999){
		cout << resultado;
	}
	
	else if(resultado > 99){
		cout << " " << resultado;
	}
	
	else if(resultado > 9){
		cout << "  " << resultado;	
	}
	
	else{
		cout << "   " << resultado;	
	}

	return 0;
}
