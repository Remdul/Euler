/*
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 */

#include <iostream>
#include <string>
#include <vector>
#include "math.h"

using namespace std;

vector<int> primes;

void calcPrime(int number) {
	int i;
	double numSqrt = sqrt(number);
	int doub = (int) numSqrt;

	cout << doub << " Doub" << endl;
	for (i = 2; doub > 0; i++) {
		bool isPrime = true;
		for (int j = 2; j < i; ++j) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			//cout << i << endl;
			primes.push_back(i);
		}
		--doub;
	}
	cout << "--------------------------\n";

}
void diviPrime(int number) {
	int i;
	double hrm;
	cout << "Prime Size: " << primes.size() << endl;

	for (i = 0; i < primes.size(); i++) {
		if (number % primes[i] == 0) {
			cout << "Prime: " << primes[i] << endl;
		}
	}
}
int main() {
	{
		int prime;

		cout << "Number to Factor: ";
		cin >> prime;
		calcPrime(prime);
		diviPrime(prime);
	}
	return 0;
}
