/*
 *

 By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

 What is the 10 001st prime number?
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
    int count = 0;
    for (int i = 2; i < 150000; i++) {
        bool prime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }

        if (prime) {

            count += 1;
            if (count == 10001)
            {
                cout << "Count: " << count << " >> " << i << " " << endl;

            }
            }
    }
    return 0;
}
