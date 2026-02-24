#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
     int a, b;
    // We put "zero" at index 0 so the numbers match the words exactly
    string words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    // Input the range
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i <= 9) {
            // Print the word from the array
            cout << words[i] << endl;
        } 
        else {
            // For numbers > 9, check if even or odd
            if (i % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
    }
    return 0;
}
