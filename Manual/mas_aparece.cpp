#include <iostream>
#include <string>
#include <vector>
using namespace std;

void mas_aparece(vector<int> v){
	
	int longitud = v.size();
	int aparicion=0, numero=0, masApariciones=1;
	
	for(int x = 0; x < longitud; x++){
		aparicion = 0;
		
		for(int y = 0; y < longitud; y++){
			if(v[x] == v[y]){
				aparicion++;
			}
		}
		
		if(aparicion >= masApariciones){
			masApariciones = aparicion;
			numero = v[x];
		}
	}
	
	cout << "El numero con mas apariciones es el " << numero << " que cuenta con un total de " << masApariciones << " aparacion/es.";
	
}

int main()
{
	vector<int> v = {8,1,7,2,1,2,2,2,2,1,1,3,1,2,1};
	mas_aparece(v);
	
	return 0;
}

