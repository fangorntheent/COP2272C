//Gus Lipkin
//COP 2272C 01
//Computer Programming 1
//Loop1
//September 18, 2019

#include <iostream>
using namespace std;

int main() {
    int size, sum = 0, fib1 = 0, fib2 = 1, fib3;
    
    cout << "Enter the size of the fibonacci sequence that you want summed:" << endl;
    cin >> size;
    
    for(int i = 0; i < size; i++) {
        sum += fib2;
        
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
    }
    
    cout << "The sum is: " << sum << endl;
    
    system("pause");
    return 0;
}
