//Gus Lipkin
//COP 2272C 01
//Computer Programming 1
//Selection
//September 11, 2019

#include <iostream>
using namespace std;

int main() {
	int number, digits[6], ten = 100000;
	cout << "Enter a 6 digit number" << endl;
	cin >> number;
	for (int i = 0; i < 6; i++) {
		digits[i] = (number - (number % ten)) / ten;
		number %= ten;
		ten /= 10;
	}
	for (int i = 0; i < 6; i++)
		cout << i << " : " << digits[i] << endl;

	system("pause");
	return 0;
}