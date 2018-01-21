#include <iostream>
#include <map>
#include <string>
#include <list>

using namespace std;

int main()
{
	map <string, string> notebook;
	map <string, string> :: iterator itr;
	list<string> namesList;
	string name = "";
	string phoneNumber = "";
	string findFor = "";
	int qtt;

	cin >> qtt;

	//INSERT IN MAP
	for(int i = 0; i < qtt; i++)
	{
		cin >> name;
		cin >> phoneNumber;
		notebook.insert(pair <string, string> (name, phoneNumber));
	}

	//WHICH NAME WILL BE FIND
	while(cin >> findFor)
	{
		namesList.push_back(findFor);
	}
	
	for(list<string>::const_iterator it = namesList.begin(); it != namesList.end(); ++it)
	{
		findFor = *it;
		if(notebook.find(findFor) != notebook.end())
		{
			cout << findFor + "=" + notebook.find(findFor)->second << "\n";
		}
		else
		{
			cout << "Not found\n";
		}

	}



}
