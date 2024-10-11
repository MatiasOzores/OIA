#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {8, 2, 2, 8, 5};
    int total = 0;

    vector<bool> usado(v.size(), false);
    
    for (int x = 0; x < int(v.size()); x++) {
        if (usado[x]) continue;  

        for (int y = x + 1; y < int(v.size()); y++) {
            if (!usado[y] && (v[x] + v[y]) % 10 == 0) { 
                total++;
                usado[x] = true;  
                usado[y] = true;
                break;  
            }
        }
    }

    cout << total << endl;  

    return 0;
}
