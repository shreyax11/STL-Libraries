//vector - all operation like insert , delete , push_back , pop_back , size , capacity , front , back , clear , display etc.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int choice, x,n, pos;

    do {
        cout << "\n----- VECTOR MENU -----\n";
        cout << "1. Insert element (push_back)\n";
        cout << "2. Delete last element (pop_back)\n";
        cout << "3. Insert at position\n";
        cout << "4. Erase from position\n";
        cout << "5. Display vector\n";
        cout << "6. Size and Capacity\n";
        cout << "7. Front and Back\n";
        cout << "8. Clear vector\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) 
        {

            case 1:
                cout << "Enter number of elements: ";
                cin >> n;

                cout << "Enter elements:\n";
                for(int i = 0; i < n; i++) 
                {
                    cin >> x;
                    v.push_back(x);
                }
                break;

            case 2:
                if(v.empty())
                    cout << "Vector is empty\n";
                else
                    v.pop_back();
                break;

            case 3:
                cout << "Enter position (0-based index): ";
                cin >> pos;
                cout << "Enter element: ";
                cin >> x;
                if(pos >= 0 && pos <= v.size())
                    v.insert(v.begin() + pos, x);
                else
                    cout << "Invalid position\n";
                break;

            case 4:
                cout << "Enter position to erase: ";
                cin >> pos;
                if(pos >= 0 && pos < v.size())
                    v.erase(v.begin() + pos);
                else
                    cout << "Invalid position\n";
                break;

            case 5:
                cout << "Vector elements: ";
                //using for each loop to display elements
                for(int i : v)
                    cout << i << " ";
                cout << endl;
                break;

            case 6:
                cout << "Size: " << v.size() << endl;
                cout << "Capacity: " << v.capacity() << endl;
                break;

            case 7:
                if(!v.empty()) {
                    cout << "Front: " << v.front() << endl;
                    cout << "Back: " << v.back() << endl;
                } else {
                    cout << "Vector is empty\n";
                }
                break;

            case 8:
                v.clear();
                cout << "Vector cleared\n";
                break;

            case 9:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while(choice != 9);

    return 0;
}
