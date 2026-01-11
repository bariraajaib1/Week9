0#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a positive number: ";
    cin >> num;
    while (num <= 0) {
        cout << "Invalid input. Enter a positive number: ";
        cin >> num;
    }
    cout << "You entered: " << num;
    return 0;
}