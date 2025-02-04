#include <iostream>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

bool esParValido(char apertura, char cierre) {
    return (apertura == '(' && cierre == ')') ||
           (apertura == '{' && cierre == '}') ||
           (apertura == '[' && cierre == ']');
}

int main()
{
	stack<char> pila;
	queue<char> cola;
	int N;
	cin >> N;
	vector<string> cadenas(N);
	
	for (int i = 0; i < N; i++)
	{
		cin >> cadenas[i];
	}
	
	for (int i = 0; i < N; i++)
	{
		int tam = cadenas[i].size();
		// Llenar la pila
		for (int j = 0; j < tam; j++)
		{
				cola.push(cadenas[i][j]);
				pila.push(cadenas[i][j]);
		}
		
		int count = 0;
		for (int j = 0; j < tam; j++)
		{
			if(esParValido(pila.top(), cola.front())){
				count++;
			}
			
			pila.pop();
			cola.pop();
		}
		
		if(count == tam/2){
				cout << "YES" << endl;
		}
		
		else{
			cout << "NO" << endl;
		}
	}
	
	return 0;
}
