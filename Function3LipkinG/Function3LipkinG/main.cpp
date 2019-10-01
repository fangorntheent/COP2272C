//Gus Lipkin
//COP 2272C 01
//Computer Programming 1
//Function 2
//September 26, 2019

#include <iostream>
using namespace std;

void rShift(int (&array)[3], int &count, int &small, int &big, int &prod) {
    int temp;
    for (int i = 0; i < count; i++) {
        temp = array[2];
        array[2] = array[1];
        array[1] = array[0];
        array[0] = temp;
    }
    for (int i = 0; i < 3; i++) {
        if (i == 0 || array[i] > big)
            big = array[i];
        if (i == 0 || array[i] < small)
            small = array[i];
    }
    prod = array[0] * array[1] * array[2];
}

int main() {
    int num[3], round, min, max, product;
    
    cout << "Enter three numbers that you want to have cycled and then how many times you want them cycled: " << endl;
    for (int i = 0; i < 3; i++)
        cin >> num[i];
    cin >> round;
    
    rShift(num, round, min, max, product);
    
    cout << endl << "The new values for the numbers are: " << num[0] << ", " <<
        num[1] << ", and " << num[2] << ", " << endl;
    
    cout << endl << "The maximum value is " << max <<
        ". The minimum value is " << min <<
        ". The product is " << product << "." << endl;
    //system("pause");
    return 0;
}
