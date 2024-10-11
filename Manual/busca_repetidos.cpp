#include <iostream>
#include <vector>
#include <algorithm>  
using namespace std;

int main() {
    vector<int> v;
    int e;
    bool repetido = false;  

    while (true) {
        cin >> e;
        if (e == 0) break;  
        v.push_back(e);    
    }
    
    for (int x = 0; x < int(v.size()); x++) {
        auto it = find(v.begin() + x + 1, v.end(), v[x]);  

        if (it != v.end()) {  
            repetido = true; 
            break;        
        }
    }
    
    if (repetido) {
        cout << "Hay repetidos" << endl;
    } else {
        cout << "No hay repetidos" << endl;
    }

    return 0;
}
