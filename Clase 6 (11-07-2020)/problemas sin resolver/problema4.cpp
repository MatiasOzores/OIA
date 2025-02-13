#include <bits/stdc++.h>
using namespace std;
// https://cses.fi/problemset/task/1641

int main() {
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> arr(n); // Guardamos valores e índices originales

    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i + 1; // Guardamos el índice original (1-based)
    }

    // Ordenamos por valor
    sort(arr.begin(), arr.end());

    // Recorremos cada número como primer elemento
    for (int i = 0; i < n - 2; i++) {
        int target = x - arr[i].first; // Lo que falta para llegar a x
        int left = i + 1, right = n - 1;

        while (left < right) {
            int sum = arr[left].first + arr[right].first;
            
            if (sum == target) {
                cout << arr[i].second << " " << arr[left].second << " " << arr[right].second << "\n";
                return 0;
            } 
            if (sum < target) left++;
            else right--;
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}
