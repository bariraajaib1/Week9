#include <iostream>
using namespace std;

int main()
{
    string password;
    string correctPassword = "abc123";

    do
    {
        cout << "Enter password: ";
        cin >> password;

        if (password != correctPassword)
        {
            cout << "Incorrect password. Try again.\n";
        }

    } while (password != correctPassword);

    cout << "Password correct. Access granted.";

    return 0;
}