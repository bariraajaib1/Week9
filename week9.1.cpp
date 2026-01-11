#include <iostream>
using namespace std;

int main()
{
    int mainChoice, subChoice;
    char moreOrder;
    double quantity, price = 0, totalBill = 0;

    do
    {
        cout << "\n===== RESTAURANT MENU =====\n";
        cout << "1. Breakfast\n";
        cout << "2. Lunch\n";
        cout << "3. Dinner\n";
        cout << "Enter your choice: ";
        cin >> mainChoice;

        switch (mainChoice)
        {
        case 1: 
            cout << "\n--- Breakfast Menu ---\n";
            cout << "1. Anda Paratha (Rs.40)\n";
            cout << "2. Nan Channy (Rs.60)\n";
            cout << "3. Siri Paye (Rs.150)\n";
            cout << "4. Tea (Rs.15)\n";
            cout << "Select item: ";
            cin >> subChoice;

            cout << "Enter quantity: ";
            cin >> quantity;

            if (subChoice == 1) price = 40;
            else if (subChoice == 2) price = 60;
            else if (subChoice == 3) price = 150;
            else if (subChoice == 4) price = 15;

            break;

        case 2: 
            cout << "\n--- Lunch Menu ---\n";
            cout << "1. Chicken Karahi (Rs.1050 per KG)\n";
            cout << "2. Mutton Karahi (Rs.1800 per KG)\n";
            cout << "3. Egg Fried Rice (Rs.450 per plate)\n";
            cout << "4. BBQ (Rs.1050 per dozen)\n";
            cout << "Select item: ";
            cin >> subChoice;

            cout << "Enter quantity: ";
            cin >> quantity;

            if (subChoice == 1) price = 1050;
            else if (subChoice == 2) price = 1800;
            else if (subChoice == 3) price = 450;
            else if (subChoice == 4) price = 1050;

            break;

        case 3: 
            cout << "\n--- Dinner Menu ---\n";
            cout << "1. Chicken Karahi (Rs.1050 per KG)\n";
            cout << "2. Mutton Karahi (Rs.1800 per KG)\n";
            cout << "3. Egg Fried Rice (Rs.450 per plate)\n";
            cout << "4. BBQ (Rs.1050 per dozen)\n";
            cout << "5. Sajji (Rs.800 per KG)\n";
            cout << "Select item: ";
            cin >> subChoice;

            cout << "Enter quantity: ";
            cin >> quantity;

            if (subChoice == 1) price = 1050;
            else if (subChoice == 2) price = 1800;
            else if (subChoice == 3) price = 450;
            else if (subChoice == 4) price = 1050;
            else if (subChoice == 5) price = 800;

            break;

        default:
            cout << "Invalid choice!\n";
            price = 0;
        }

        totalBill += price * quantity;

        cout << "\nDo you want to order more? (y/n): ";
        cin >> moreOrder;

    } while (moreOrder == 'y' || moreOrder == 'Y');

    cout << "\n===== TOTAL BILL =====\n";
    cout << "Total Amount to Pay: Rs. " << totalBill << endl;
    cout << "Thank you for your order!\n";

    return 0;
}