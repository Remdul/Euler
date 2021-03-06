#Each new term in the Fibonacci sequence is generated by adding the previous
#two terms. By starting with 1 and 2, the first 10 terms will be:
#
#1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
#By considering the terms in the Fibonacci sequence whose values do not exceed
#four million, find the sum of the even-valued terms.


def main():
    a, b= 1, 2
    listFib = []
    numbersToAdd = []
    total = 0

    while a < 4000000:
        listFib.append(a)
        a, b = b, a+b

    sortedFib = (sorted(set(listFib)))
    for i in sortedFib:
        if i % 2 == 0:
            numbersToAdd.append(i)

    for n in numbersToAdd:
        total = total + n

    print(total)

if __name__ == '__main__':
    main()