#include<iostream>
#include<vector>
using namespace std;

vector<int> solve(int *a, int *b){
    vector<int> result (2,0); 
	// Complete this function
    for(int i = 0; i < 3; i++){
		if(a[i] > b[i]){
			result[0]++; 
		}else if(b[i] > a[i]){
			result[1]++;
		}
	}
	return result;
}

int main() {
	
	int a[3];
	int b[3];
    
    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1] >> b[2];
    
	vector <int> result = solve(a, b);
    cout << result[0] << " " << result[1];
    cout << endl;
    

    return 0;
}