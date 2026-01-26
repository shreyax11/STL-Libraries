//list is a doubly linked list STL container 
//that allows fast insertion and deletion anywhere, but does not support indexing.

#include<iostream>
#include<list>
using namespace std;
int main() 
{
    list<int> l;
    int choice, x,n, pos;
    do 
    {
        cout << "\n----- LIST MENU -----\n";
        cout << "1. Insert element (push_back)\n";
        cout << "2. Delete last element (pop_back)\n";
        cout << "3. Insert at position\n";
        cout << "4. Erase from position\n";
        cout << "5. Display list\n";
        cout << "6. Size and Capacity\n";
        cout << "7. Front and Back\n";
        cout << "8. Clear list\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) 
        {
            case 1:
                cout<<"enter the number of element to insert: ";
                cin>>n;
                for(int i=0;i<n;i++)
                {
                    cout << "Enter element to insert: ";
                    cin >> x;
                    l.push_back(x);
                }
                break;
            case 2:
                if(!l.empty()) 
                {
                    l.pop_back();
                    cout << "Last element deleted.\n";
                } 
                else 
                    cout << "List is empty. Cannot delete.\n";
                break;  
            case 3:
                cout << "Enter position (0-based index) to insert: ";
                cin >> pos;
                if(pos < 0 || pos > l.size()) 
                    cout << "Invalid position.\n";
                else
                {
                    cout << "Enter element to insert: ";
                    cin >> x;
                    auto it = l.begin();
                    for(int i = 0; i < pos; i++)
                        it++;
                    l.insert(it, x);    
                }
                break;
            case 4:
                cout << "\n--- ERASE MENU ---\n";
                cout << "1. Erase ONE element\n";
                cout << "2. Erase RANGE of elements\n";
                cout << "Enter your choice: ";
                int erase_choice;
                cin >> erase_choice;
                //erasing a single element
                if(erase_choice == 1)
                {
                    cout << "Enter position (0-based index) to erase: ";
                    cin >> pos;
                    if(pos < 0 || pos >= l.size()) 
                        cout << "Invalid position.\n";
                    else
                    {
                        for(auto it = l.begin(); it!=l.end(); it++) 
                        {
                            if(pos==0)
                            {
                                l.erase(it);
                                break;
                            }
                            pos--;
                        }
                    }
                }
                //erasing a range of elements
                else if(erase_choice == 2)
                {
                    int pos2;
                    cout << "Enter start position (0-based index) to erase: ";
                    cin >> pos;
                    cout << "Enter end position (0-based index) to erase: ";
                    cin >> pos2;
                    if(pos < 0 || pos >= l.size() || pos2 < 0 || pos2 > l.size() || pos >= pos2) 
                        cout << "Invalid positions.\n";
                    else
                    {
                        auto it1 = l.begin();
                        auto it2 = l.begin();
                        for(int i = 0; i < pos; i++)
                            it1++;
                        for(int i = 0; i < pos2; i++)
                            it2++;
                        l.erase(it1, it2);
                    }
                }
                else
                {
                    cout << "Invalid choice.\n";
                }     
                break;
            case 5:
                cout<<"List elements: ";
                for(auto it = l.begin(); it != l.end(); it++)
                    cout << *it << " ";
                cout << "\n";
                break;
                case 6:
                cout<<"SIZE of list: "<<l.size()<<"\n";
                cout<<"Note: list does not have capacity function as it is a linked list.\n";
                //list does not have capacity() 
                //because a list does not store elements in contiguous memory 
                //and does not pre-allocate extra space.
                break;
            case 7:
                if(l.empty())
                    cout << "List is empty.\n";
                else 
                {
                    cout << "Front element: " << l.front() << "\n";
                    cout << "Back element: " << l.back() << "\n";
                }
                break;
            case 8:
                l.clear();
                cout<<"List cleared.\n";
                break;
            case 9:
                cout<<"Exiting...\n";
                break;
            default:
                cout<<"Invalid choice. Please try again.\n";
        }  
    }while(choice != 9);
    return 0;
}
