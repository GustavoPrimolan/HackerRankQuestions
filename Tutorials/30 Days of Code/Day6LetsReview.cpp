#include <iostream>
#include <string.h>
#include <string>
#include <list>

using namespace std;


int main()
{

	int quantidade;
	string s = "", odd = "", even = "";
	list<string> listaPalavras, listaPalavrasSeparadas;
	cin >> quantidade;

	for(int i = 0; i < quantidade; i++)
	{
		cin >> s;
		listaPalavras.push_back(s);
	}


	for(list<string>::const_iterator p = listaPalavras.begin(); p != listaPalavras.end(); ++p)
	{
		string palavra = *p;
		even = "";
		odd = "";
		for(int i = 0 ; i < palavra.length(); i++)
		{
			if(i % 2 == 0)
			{
				even = even + palavra[i];
			}
			else
			{
				odd = odd + palavra[i];
			}
			
		}
		string novaPalavra = even + " " + odd;
		listaPalavrasSeparadas.push_back(novaPalavra);
	}
	for(list<string>::const_iterator p = listaPalavrasSeparadas.begin(); p != listaPalavrasSeparadas.end(); ++p)
	{
		s = *p;
		cout << s << "\n";
	}
	return 0;
}
