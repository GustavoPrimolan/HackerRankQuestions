#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int n;
	int qttNumberOne = 0;
	int bigger = 0;
	cin >> n;

	
	while(n > 1){

		if(n%2 == 1){
			qttNumberOne++;
		}else{
			if(bigger < qttNumberOne){
				bigger = qttNumberOne;
			}
			qttNumberOne = 0;
		}

		n = n/2;
		//THE LAST NUMBER
		if(n == 1){
			qttNumberOne++;
			if(bigger < qttNumberOne){
				bigger = qttNumberOne;
			}
		}
	}
	
	cout << bigger;
	return 0;
}
