#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


class Difference
{
private:
	vector<int> elements;

public:
	int maximumDifference;

	// Add your code here

	Difference(vector<int> a)
	{
		this->elements = a;
	}
	//SOLU��O O(n^2)
	/*
	void computeDifference()
	{
		maximumDifference = 0;
		for(int i = 0; i < elements.size(); i++)
		{
			for (int j = i + 1; j < elements.size(); j++)
			{
				if(maximumDifference < abs(elements[i] - elements[j]))
				{
					maximumDifference = abs(elements[i] - elements[j]);
				}
			}
		}
	}
	*/

	//SOLU��O O(N)
	void computeDifference()
	{
		int n = elements.size();
		int min = 100;
		int max = 1;
		for(int i = 0; i < n; ++i)
		{
			if(elements[i] < min)
			{
				min = elements[i];
			}
			if(elements[i] > max)
			{
				min = elements[i];
			}
		}
		maximumDifference = max - min;
	}
}; // End of Difference class

int main()
{
	int N;
	cin >> N;

	vector<int> a;

	for (int i = 0; i < N; i++)
	{
		int e;
		cin >> e;

		a.push_back(e);
	}

	Difference d(a);

	d.computeDifference();

	cout << d.maximumDifference;

	return 0;
}
