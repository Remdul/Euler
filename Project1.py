#If we list all the natural numbers below 10 that are multiples of 3 or 5,
#we get 3, 5, 6 and 9. The sum of these multiples is 23.
#
#Find the sum of all the multiples of 3 or 5 below 1000.
from twisted.test.test_amp import AddedCommandProtocol

def main():
    print("Hello2")
    count = 1000
    listResults = []
    i = 0
    addedResult = 0

    for i in range (2,count):
        if i % 3 == 0:
            listResults.append(i)
        if i % 5 == 0:
            listResults.append(i)

    sortedListResults = sorted(set(listResults))

    for result in sortedListResults:
        addedResult = addedResult + result
    print(addedResult)

if __name__ == '__main__':
    main()

