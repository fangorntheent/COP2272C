#include <iostream>
#include <string>
using namespace std;

string a, b, c;

void draw(int n, char from, char to, char swap, string &a, string &b, string &c) {
	string disk;

	for (int i = 0; i < n; i++)
		disk.append("*");
	disk.append("\n");

	switch (from) {
	case 'A':
		a.erase(0, a.find_first_of('\n') + 1);
		break;
	case 'B':
		b.erase(0, b.find_first_of('\n') + 1);
		break;
	case 'C':
		c.erase(0, c.find_first_of('\n') + 1);
		break;
	default:
		break;
	}

	switch (to) {
	case 'A':
		a.insert(0, disk);
		break;
	case 'B':
		b.insert(0, disk);
		break;
	case 'C':
		c.insert(0, disk);
		break;
	default:
		break;
	}

	std::cout << "Rod a:\n" << a << "Rod b:\n" << b << "Rod c:\n" << c << "\n";
	cout << "----------------------------------------------------------------------------------\n";
}

void tower(int n, char from, char to, char swap, long long &count) {
	if (n == 1) {
		cout << "Move disk 1 from rod " << from << " to rod " << to << endl;
		draw(n, from, to, swap, a, b, c);
		count++;
		return;
	}
	count++;
	tower(n - 1, from, swap, to, count);
	cout << "Move disk " << n << " from rod " << from << " to rod " << to << endl;
	draw(n, from, to, swap, a, b, c);
	tower(n - 1, swap, to, from, count);
}

int main() {
	int n;
	long long count = 0;

	cout << "Enter the number of disks: ";
	cin >> n;
	cout << endl;

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			a.append("*");
		}
		a.append("\n");
	}
	std::cout << "Rod a:\n" << a << "Rod b:\n" << b << "Rod c:\n" << c << "\n";
	cout << "----------------------------------------------------------------------------------\n";

	tower(n, 'A', 'B', 'C', count);  
	cout << "This took " << count << " moves." << endl;
	
	system("pause");
	return 0;
}