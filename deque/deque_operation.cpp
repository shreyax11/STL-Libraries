// deque (double-ended queue) is an STL container
// that allows insertion and deletion at both front and back
// and supports indexing (random access)

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    int choice, x, n, pos;
    do
    {
        cout << "\n----- DEQUE MENU -----\n";
        cout << "1. Insert elements (push_back)\n";
        cout << "2. Delete last element (pop_back)\n";
        cout << "3. Insert at position\n";
        cout << "4. Erase element(s)\n";
        cout << "5. Display deque\n";
        cout << "6. Size\n";
        cout << "7. Front and Back\n";
        cout << "8. Clear deque\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter number of elements: ";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cout << "Enter element: ";
                cin >> x;
                d.push_back(x);
            }
            break;
        case 2:
            if (d.empty())
                cout << "Deque is empty. Cannot delete.\n";
            else
            {
                d.pop_back();
                cout << "Last element deleted.\n";
            }
            break;
        case 3:
            cout << "Enter position (0-based index): ";
            cin >> pos;
            if (pos < 0 || pos > d.size())
                cout << "Invalid position.\n";
            else
            {
                cout << "Enter element: ";
                cin >> x;
                d.insert(d.begin() + pos, x);
            }
            break;
        case 4:
            int erase_choice;
            cout << "\n--- ERASE MENU ---\n";
            cout << "1. Erase ONE element\n";
            cout << "2. Erase RANGE of elements\n";
            cout << "Enter choice: ";
            cin >> erase_choice;
            if (erase_choice == 1)
            {
                cout << "Enter position to erase: ";
                cin >> pos;
                if (pos < 0 || pos >= d.size())
                    cout << "Invalid position.\n";
                else
                {
                    d.erase(d.begin() + pos);
                    cout << "Element erased.\n";
                }
            }
            else if (erase_choice == 2)
            {
                int pos2;
                cout << "Enter start position: ";
                cin >> pos;
                cout << "Enter end position: ";
                cin >> pos2;
                if (pos < 0 || pos2 > d.size() || pos >= pos2)
                    cout << "Invalid range.\n";
                else
                {
                    d.erase(d.begin() + pos, d.begin() + pos2);
                    cout << "Range erased.\n";
                }
            }
            else
                cout << "Invalid erase choice.\n";
            break;
        case 5:
            cout << "Deque elements: ";
            for (int val : d)
                cout << val << " ";
            cout << endl;
            break;
        case 6:
            cout << "Size of deque: " << d.size() << endl;
            cout << "Note: deque does not provide capacity() like vector.\n";
            break;
        case 7:
            if (d.empty())
                cout << "Deque is empty.\n";
            else
            {
                cout << "Front element: " << d.front() << endl;
                cout << "Back element: " << d.back() << endl;
            }
            break;
        case 8:
            d.clear();
            cout << "Deque cleared.\n";
            break;
        case 9:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 9);
    return 0;
}
