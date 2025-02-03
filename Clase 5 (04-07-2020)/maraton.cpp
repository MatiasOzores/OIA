#include <iostream>
#include <vector>
#include <fstream>

using namespace std;
int main()
{
	ifstream cin("maraton.in");
	ofstream cout("maraton.out");
	int A;
	cin >> A;
	
	vector<int> N(A,0);
	vector<int> C(A,0);
	
	for (int i = 0; i < A; i++)
	{
		cin >> N[i] >> C[i];
	}
	
	vector<int> ganadores(10,0);
	
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 0; j < A; j++)
		{
			if(C[j] == i)
			{
				ganadores[i-1] = N[j];
				break;
			}
		}
	}
	
	for (int i = 0; i < 10; i++)
	{
		cout << i+1 << " " << ganadores[i] << endl;
	}
	
	return 0;
}

