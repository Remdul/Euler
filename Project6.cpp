/*
 *

The sum of the squares of the first ten natural numbers is,
12 + 22 + ... + 102 = 385

The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)2 = 552 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 *
 */
#include <iostream>
#include <string>
#include <vector>
#include "math.h"
#include <algorithm>

using namespace std;


int main()
{
    int sumofSquares;
    int squareofSums;

    int max = 100;
    sumofSquares = 0;
    for (int i = 0; i <= max; i++)
    {
        sumofSquares += i*i;
    }
    cout << sumofSquares << endl;

    squareofSums = 0;
    for (int i = 0; i <= max; i++)
        {
            squareofSums+= i;
        }
    cout << squareofSums << endl;
    squareofSums = squareofSums * squareofSums;
    cout << squareofSums << endl;
    cout << squareofSums - sumofSquares << " |||" << endl;
}



