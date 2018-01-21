#include <iostream>


using namespace std;

int main(int argc, char** argv)
{
	int tamanhoArray;
	cin >> tamanhoArray;
	int array[tamanhoArray];
	
	for(int i=0; i<tamanhoArray;i++){
		cin >> array[i];
	}
	
	for(int i = tamanhoArray-1; i >= 0; i--){
		cout << array[i] << " ";
	}
	
	
	return 0;
}