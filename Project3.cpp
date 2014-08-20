/*
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> primes;



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
//		hrm = number / primes[i];
		if (number % primes[i] == 0)
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
