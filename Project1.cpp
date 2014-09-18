/*	If we list all the natural numbers below 10 that are multiples
	of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples
	is 23.
	Find the sum of all the multiples of 3 or 5 below 1000.
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>		//Using this for std::unique and std::distance

using namespace std;


bool checker (int i, int j) {
  return (i==j);
}

int main()
{
	int numb;
	int i;
	int subnumb;
	int tot;
	vector<int> v;
	vector<int>::iterator realNum;

	cout << "Number to calculate to: ";
	cin >> numb;
	subnumb = 0;
	for(i=0; i<numb; i++)
	{
		if(subnumb+3 < numb)
		{
			subnumb = subnumb + 3;
//			cout << subnumb << endl;
			v.push_back(subnumb);
		}
	}
	subnumb = 0;
	for(i=0; i<numb; i++)
	{
		if(subnumb+5 < numb)
		{
			subnumb = subnumb + 5;
//			cout << subnumb << endl;
			v.push_back(subnumb);
		}
	}
	sort (v.begin(), v.end());
	realNum = unique (v.begin(), v.end());
	v.resize( distance(v.begin(),realNum));
	unique (v.begin(), v.end(), checker);

	tot = 0;
	  for (realNum=v.begin(); realNum!=v.end(); ++realNum)
		  {
		  tot = tot + *realNum;
		  }
	cout << tot << endl;

	return 0;
}


