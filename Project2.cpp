/*

Each new term in the Fibonacci sequence is generated by adding
the previous two terms. By starting with 1 and 2, the first 10
terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values
do not exceed four million, find the sum of the even-valued
terms.

 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isEven( int integer )
{
  if ( integer % 2== 0 )
     return true;
  else
     return false;
}

int main()
{
	int fibgen;
	int i;
	int calc;
	int last1;
	int last2;
	int next;
	int tot;
	vector<int> v;
	vector<int> n;

	// Lets create the sequence //
	cout << "Number to generate to: ";
	cin >> fibgen;

	calc = 0;
	last1 = 1;
	last2 = 0;
	next = 0;

	while (next <= fibgen)
	{
		next = last1 + last2;
		last2 = last1;
		last1 = next;
//		cout << next << endl; <-- Debug
		v.push_back(next);
//		fibgen = fibgen - 1;
	}

	for (i = 0; i < v.size(); i++)
	{
		if (isEven(v[i]) == true)
		{
			n.push_back(v[i]);
//			cout << v[i] << endl; <-- Debug
		}
	}
	tot = 0;
	for (i = 0; i < n.size(); i++)
	{
//		cout << n[i] << endl;
		tot = tot + n[i];
	}
	cout << tot << endl;
	return 0;
}
