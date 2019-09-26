//Gus Lipkin
//COP 2272C 01
//Computer Programming 1
//Function 2
//September 26, 2019

#include <iostream>
using namespace std;

void rShift(int &a, int &b, int &c, int &count) {
    int temp;
    for (int i = 0; i < count; i++) {
        temp = c;
        c = b;
        b = a;
        a = temp;
    }
}

int main() {
    int num[3], round, min, max, product;
    
    cout << "Enter three numbers that you want to have cycled and then how many times you want them cycled: " << endl;
    for (int i = 0; i < 3; i++)
        cin >> num[i];
    cin >> round;
    
    rShift(num[0], num[1], num[2], round);
    
    cout << endl << "The new values for the numbers are: " << num[0] << ", " <<
        num[1] << ", and " << num[2] << ", " << endl;
    
    for (int i = 0; i < 3; i++) {
        if (i == 0 || num[i] > max)
            max = num[i];
        if (i == 0 || num[i] < min)
            min = num[i];
    }
    product = num[0] * num[1] * num[2];
    
    cout << endl << "The maximum value is " << max <<
        ". The minimum value is " << min <<
        ". The product is " << product << "." << endl;
    //system("pause");
    return 0;
}
