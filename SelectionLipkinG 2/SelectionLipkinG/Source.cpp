//Gus Lipkin
//COP 2272C 01
//Computer Programming 1
//Selection
//September 18, 2019

#include <iostream>
using namespace std;

int main() {
	int number, digits[6] = { -1 }, ten = 100000, diffDigits[10] = { 0 };

	cout << "Enter a 6 digit number" << endl;
	cin >> number;

	cout << endl << "Below is the 'position : number'" << endl;
	for (int i = 0; i < 6; i++) {
		digits[i] = (number - (number % ten)) / ten;
		number %= ten;
		ten /= 10;
		diffDigits[digits[i]]++;
		cout << i << " : " << digits[i] << endl;
	}

	cout << endl << "Below is the 'number : instances of number'" << endl;
	for (int i = 0; i < 10; i++)
		if (diffDigits[i] != 0)
			cout << i << " : " << diffDigits[i] << endl;

	system("pause");
	return 0;
}