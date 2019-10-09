  
//Gus Lipkin
//COP 2272C 01
//Computer Programming 1
//Recursion 1
//October 10, 2019

#include <iostream>
#include <cmath>
using namespace std;

int getPrime(int n) {
    int num, count;
    bool status = false;
    
    if(n <= 2)
        return n;
    
    num = getPrime(n - 1);
    
    for (count = 2; count <= n; ) {
        for (int i = 2; i <= (int)sqrt(num); i++ ) {
            if (num % i == 0) {
                status = false;
                break;
            }
        }
        if (status) {
            count++;
            return num;
        }
        status = true;
        num++;
    }
    return num;
}

void printPrime(int n) {
    if(n == 2)
        cout << 2 << ", ";
    else {
        printPrime(n - 1);
        cout << getPrime(n) << ", ";
    }
}

int main() {
    int n;
    cout << "Enter a number to get the first n primes: ";
    cin >> n;
    cout << endl;
    
    if (n >= 1)
        cout << "The first " << n <<" prime numbers are: " << endl;
    if (n == 0)
        cout << "There are no prime numbers." << endl;
    
    printPrime(n + 1);
    
    cout << endl;
    //system("pause");
    return 0;
}
