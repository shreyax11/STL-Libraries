//Stack is an STL container adaptor that follows LIFO (Last In, First Out).
//stack is non sequential container .
//Stack does NOT allow:
// indexing
// iterators
//insert/erase in middle

#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    int choice, x;
    do
    {
        cout << "\n----- STACK MENU -----\n";
        cout << "1. Push element\n";
        cout << "2. Pop element\n";
        cout << "3. Top element\n";
        cout << "4. Size\n";
        cout << "5. Check if empty\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter element to push: ";
            cin >> x;
            s.push(x);
            cout << "Element pushed.\n";
            break;
        case 2:
            if (s.empty())
                cout << "Stack is empty. Cannot pop.\n";
            else
            {
                s.pop();
                cout << "Top element popped.\n";
            }
            break;
        case 3:
            if (s.empty())
                cout << "Stack is empty.\n";
            else
                cout << "Top element: " << s.top() << endl;
            break;
        case 4:
            cout << "Size of stack: " << s.size() << endl;
            break;
        case 5:
            if (s.empty())
                cout << "Stack is empty.\n";
            else
                cout << "Stack is not empty.\n";
            break;
        case 6:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 6);
    return 0;
}
