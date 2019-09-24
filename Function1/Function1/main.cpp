//Gus Lipkin
//COP 2272C 01
//Computer Programming 1
//Function1
//September 20, 2019

#include <iostream>
using namespace std;

int gcd2(int a, int b) {
    if (b == 0)
        return a;
    return gcd2(b, a % b);
}
int gcd(int a, int b, int c) {
    // Return the greatest common divisor of three parameters
    return gcd2(a, gcd2(b, c));
}

int avg(int a, int b, int c) {
    // Return the average of three parameters
    return (int)((a + b + c) / 3);
}

void printR(int a, int b, int c) {
    // Receive 3 input numbers from main as parameters
    // then call both gcd() and avg() and pass three parameters to them
    // Print received results of gcd() and avg()
    // Note that result should not be printed in main
    cout << "The greatest common divisor of " << a << ", " << b << ", and " << c << " is " <<
        gcd(a, b, c) << endl;
    cout << "The average of " << a << ", " << b << ", and " << c << " rounded down is " <<
        avg(a, b, c) << endl;
}

int main() {
    // Read three integers from the user
    //call printR()
    int x, y, z;
    cout << "Enter three integers to get the greatest common divisor and the average: ";
    cin >> x >> y >> z;
    cout << endl;
    
    printR(x, y, z);
    
    //system("pause");
    return 0;
}
