/*
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool divide2(int num)
{
	if (num == 2)
		return true;
	else if (num %2 == 0)
		return true;
	else
		return false;
}
bool divide3(int num)
{
	if (num == 3)
		return true;
	else if (num %3 == 0)
		return true;
	else
		return false;
}
bool divide5(int num)
{
	if (num == 5)
		return true;
	else if (num %5 == 0)
		return true;
	else
		return false;
}
bool divide7(int num)
{
	if (num == 7)
		return true;
	else if (num %7 == 0)
		return true;
	else
		return false;
}

void calcPrime(int number)
{
	int i;
	for (i = 0; i < number; i++)
	{
		if ((divide2(i) == true) && (divide3(i) == true) && (divide5(i) == true) && (divide7(i) == true))
		{
			cout << i << endl;
		}
		else
		{

		}
	}
}
int main()
{
	{
		int prime;

		cout << "Number to Factor: ";
		cin >> prime;
		calcPrime(prime);

	}
	return 0;
}
