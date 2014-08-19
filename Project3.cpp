/*
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> primes;


bool divide2(int num)
{
	if (num == 2)
		return false;
	else if (num %2 == 0)
		return true;
	else
		return false;
}
bool divide3(int num)
{
	if (num == 3)
		return false;
	else if (num %3 == 0)
		return true;
	else
		return false;
}
bool divide5(int num)
{
	if (num == 5)
		return false;
	else if (num %5 == 0)
		return true;
	else
		return false;
}
bool divide7(int num)
{
	if (num == 7)
		return false;
	else if (num %7 == 0)
		return true;
	else
		return false;
}

void calcPrime(int number)
{
	int i;

	for (i = 2; number > 0; i++ )
	{
		bool isPrime = true;
		for (int j = 2; j < i; ++j)
		{
			if (i % j == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
		{
//			cout << i << endl;
			primes.push_back(i);
		}
		--number;
	}
	cout << "--------------------------\n";

}
void diviPrime(int number)
{
	int i;
	double hrm;
	for (i = 0; i < primes.size(); i++)
	{
		hrm = static_cast<double>(number) / static_cast<double>(primes[i]);
		if (hrm == (int)hrm)
		{
			cout << primes[i] << endl;
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
		diviPrime(prime);
	}
	return 0;
}
