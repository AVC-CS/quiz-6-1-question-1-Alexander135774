#include <iostream>
using namespace std;

// Function declarations
void getTwoValues(int &begin, int &end);
int getNextPrime(int begin);
int getPrevPrime(int end);
bool isPrime(int num);

void getTwoValues(int &begin, int &end) {
    do {
        cout << "Enter two numbers: ";
        cin >> begin >> end;
    } while (begin >= end);
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int getNextPrime(int begin) {
    int num = begin + 1;
    while (true) {
        if (isPrime(num)) return num;
        num++;
    }
}

int getPrevPrime(int end) {
    int num = end - 1;
    while (num > 1) {
        if (isPrime(num)) return num;
        num--;
    }
    return -1;
}