# The prime factors of 13195 are 5, 7, 13 and 29.
# What is the largest prime factor of the number 600851475143 ?
from cmath import sqrt

def main():
    factored = 13195
    primes   = []
    isPrime  = False
    for i in range(2,factored):
        isPrime = True
        for n in range(2, i):
            if i % n == 0:
                isPrime = False
        if isPrime is True:
            primes.append(n)

    cleanedPrimes = sorted(set(primes))

    for prime in cleanedPrimes:
        print(prime)


if __name__ == '__main__':
    main()