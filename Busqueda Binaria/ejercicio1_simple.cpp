#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool busquedaBinaria(vector<int> &v, int buscado) {
    int inicio = 0, fin = v.size() - 1;  

    while (inicio <= fin) { 
        int medio = (inicio + fin) / 2;

        if (v[medio] > buscado) {
            fin = medio - 1;
        }
        else if (v[medio] < buscado) {
            inicio = medio + 1;
        }
        else {
            return true;  
        }
    }

    return false;  
}

int main() {
    vector<int> v = {4, 7, 1, 8, 12, 2, 100, 20, 6};
	sort(v.begin(), v.end());
	
    cout << busquedaBinaria(v, 4);  

    return 0;
}
