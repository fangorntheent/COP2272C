//Gus Lipkin
//COP 2272C 01
//Computer Programming 1
//Function2
//September 20, 2019

#include <iostream>
using namespace std;

void printTriangle(int size) {
    int stars = (size * 2) - 1;;
    for(int i = 0; i < size; i++) {
        for(int k = 0; k < i; k++)
            cout << " ";
        for(int j = 0; j < stars; j++)
            cout << "*";
        
        cout << endl;
        stars -= 2;
    }
}

int main() {
    int lines;
    cout << "Enter the number of lines you want in your triangle: ";
    cin >> lines;
    cout << endl;
    
    printTriangle(lines);
    
    //system("pause");
    return 0;
}
