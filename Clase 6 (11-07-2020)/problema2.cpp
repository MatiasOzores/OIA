#include <iostream>
#include <vector>
#include <set>
using namespace std;

// https://cses.fi/problemset/task/1621

int main()
{
	int n;
	set<int> lista;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		lista.insert(num);
	}
	
	cout << lista.size();

	return 0;
}

