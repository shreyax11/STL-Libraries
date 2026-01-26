#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, int> p1, p2;
    int choice;
    do
    {
        cout << "\n----- MENU -----\n";
        cout << "1. Create Pair\n";
        cout << "2. Display Pair\n";
        cout << "3. Compare Two Pairs\n";
        cout << "4. Swap Pairs\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout << "Enter first value of pair 1: ";
                cin >> p1.first;
                cout << "Enter second value of pair 1: ";
                cin >> p1.second;
                cout << "Enter first value of pair 2: ";
                cin >> p2.first;
                cout << "Enter second value of pair 2: ";
                cin >> p2.second;
                break;
            case 2:
                cout << "Pair 1: (" << p1.first << ", " << p1.second << ")\n";
                cout << "Pair 2: (" << p2.first << ", " << p2.second << ")\n";
                break;
            case 3:
                if(p1 == p2)
                    cout << "Both pairs are equal\n";
                else if(p1 < p2)
                    cout << "Pair 1 is smaller than Pair 2\n";
                else
                    cout << "Pair 1 is greater than Pair 2\n";
                break;
            case 4:
                swap(p1, p2);
                cout << "Pairs swapped successfully\n";
                break;
            case 5:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while(choice != 5);
    return 0;
}
