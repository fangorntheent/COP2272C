//Gus Lipkin
//COP 2272C 01
//Computer Programming 1
//Loop2
//September 18, 2019

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int size, num = 3, count;
    bool status = false;
    
    cout << "Enter the number of prime numbers you want: ";
    cin >> size;
    
    if ( size >= 1 ) {
        cout << endl << "The first " << size <<" prime numbers are: " << endl;
        cout << 2;
    }
    
    for ( count = 2 ; count <= size ;  ) {
        for (int i = 2 ; i <= (int)sqrt(num) ; i++ ) {
            if ( num % i == 0 ) {
                status = false;
                break;
            }
        }
        if (status) {
            cout << ", " << num;
            count++;
        }
        status = true;
        num++;
    }
    
    cout << endl;
    //system("pause");
    return 0;
}
