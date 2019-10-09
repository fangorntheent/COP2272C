#include <iostream>
#include <string>
using namespace std;

string a, b, c;

void printMove(char from, char to, int n) {
    cout << "Move disk " << n << " from rod " << from << " to rod " << to << endl;
}

void draw(int n, char swap, char from, char to, string &a, string &b, string &c) {
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

    std::cout << "Rod a:\n" << a << "Rod b:\n" << b << "Rod c:\n" << c;
    cout << "----------------------------------------------------------------------------------\n";
}

//Will call draw
void tower(int n, char swap, char from, char to, long long &count) {
    if (n == 1) {
        printMove(from, to, n);
        draw(n, swap, from, to, a, b, c);
        count++;
        return;
    }
    count++;
    tower(n - 1, to, from, swap, count);
    printMove(from, to, n);
    draw(n, swap, from, to, a, b, c);
    tower(n - 1, from, swap, to, count);
}

//Will not call draw
void tower(int n, char swap, char from, char to) {
    if (n == 1) {
        printMove(from, to, n);
        return;
    }
    tower(n - 1, to, from, swap);
    printMove(from, to, n);
    tower(n - 1, from, swap, to);
}

int main() {
    int n, print;

    cout << "Enter the number of disks: ";
    cin >> n;
    cout << "Do you want to print the disks? (1 for yes) ";
    cin >> print;
    
    //Code for drawing tower
    if(print == 1) {
        long long count = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                a.append("*");
            }
            a.append("\n");
        }
        std::cout << "Rod a:\n" << a << "Rod b:\n" << b << "Rod c:\n" << c << "\n";
        cout << "----------------------------------------------------------------------------------\n";
    
        tower(n, 'B', 'A', 'C', count);
        cout << "This took " << count << " moves." << endl;
    }
    else
        tower(n, 'B', 'A', 'C');
    
    //system("pause");
    return 0;
}
