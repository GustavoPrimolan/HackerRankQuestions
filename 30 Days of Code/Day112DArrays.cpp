#include <iostream>

using namespace std;


int main()
{
	int a[6][6];
	int maior = -63;
	int soma = 0;
	for(int i = 0; i < 6; i++)
	{
		for(int j = 0; j < 6; j++)
		{
			cin >> a[i][j];
		}
	}

	for(int i = 1; i < 5; i++)
	{
		for(int j = 1; j < 5; j++)
		{

			soma = a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1]
				   + a[i][j] +
				   a[i + 1][j - 1] + a[i + 1][j] + a[i + 1][j + 1];
			if(maior < soma)
			{
				maior = soma;
			}


		}
	}

	cout << maior;
}
