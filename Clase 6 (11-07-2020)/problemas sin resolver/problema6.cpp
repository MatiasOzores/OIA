#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// https://codeforces.com/problemset/problem/600/B

int contarMenoresOIguales(const vector<int>& a, int valor) {
    int ini = 0, fin = a.size(), mid;

    while (ini < fin) {  
        mid = ini + (fin - ini) / 2; 
        if (a[mid] <= valor) {
            ini = mid + 1; // Buscar más a la derecha
        } else {
            fin = mid; // Restringir a la izquierda
        }
    }
    return ini;  // ini es la cantidad de elementos <= valor
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);    

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
	sort(a.begin(),a.end()); // Ordenando vector


	for (int i = 0; i < m; i++)
	{
		cout << contarMenoresOIguales(a, b[i]) << " ";
	}
	
	

    return 0;
}
