#include <iostream>
using namespace std;

int main()
{
    int choice;
    char again;
    float quantity, total = 0;

    do
    {
        cout << "\n--- MENU ---\n";
        cout << "1. Chicken Karahi (1800 per KG)\n";
        cout << "2. Chicken Biryani (250 per plate)\n";
        cout << "3. Zinger Burger (350 each)\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter quantity in KG: ";
                cin >> quantity;
                total = total + (quantity * 1800);
                break;

            case 2:
                cout << "Enter number of plates: ";
                cin >> quantity;
                total = total + (quantity * 250);
                break;

            case 3:
                cout << "Enter number of burgers: ";
                cin >> quantity;
                total = total + (quantity * 350);
                break;

            default:
                cout << "Invalid choice!";
        }

        cout << "Do you want to order more? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "\nTotal Bill = Rs. " << total;

    return 0;
}