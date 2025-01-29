#include <iostream>
using namespace std;

int h,m,s;

int main(){
	
	int d;
	
	cin >> h >> m >> s;
	cin >> d;
	
	while(d > 0){
		if(d > 60){
			m++;
			d-=60;
			
			if(m >= 60){
				h++;
				m = 0;
			}
			
			if(h > 23){
				h = 0;
				m = 0;
			}
		}
		
		else if(d <= 60){
			if(d == 60){
				m++;
				if(m >= 60){
					h++;
					m = 0;
				}
				
				if(h > 23){
					h = 0;
					m = 0;
				}
			}
			
			else{
				if(s+d > 60){
					m++;
					
					if(m >= 60){
						h++;
						m = 0;
					}
					
					if(h > 23){
						h = 0;
						m = 0;
					}					
					
					s = (s+d) - 60;
					
				}
				
				else if(s+d == 60){
					m++;
					
					if(m >= 60){
						h++;
						m = 0;
					}
					
					if(h > 23){
						h = 0;
						m = 0;
					}					
					
					s = 0;
				}
				
				else{
					s = s+d;
				}
			}
			
			d = 0;
		}
	}
	
	
	cout << h << " " << m << " " << s;

	
	return 0;
}
