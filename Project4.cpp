/*
	A palindromic number reads the same both ways. The largest palindrome made
	from the product of two 2-digit numbers is 9009 = 91 × 99.
	Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
#include <string>
#include <vector>
#include "math.h"
#include <algorithm>    // std::sort

using namespace std;

int flipper(int number)
{
    int new_num = 0;
    while(number > 0)
    {
            new_num = new_num*10 + (number % 10);
            number = number/10;
    }
    return new_num;
}

int main() {
    int topNum = 999;
    int botNum = 900;
    int i, j;
    int summed;
    vector<int> numbers;

    for (i = 999; i > botNum; i--) {
        for (j = 999; j > botNum; j--) {
            summed = i * j;
            if (flipper(summed) == summed) {
                numbers.push_back(summed);
            }
        }
    }

    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << endl;
    }
    return 0;
}

