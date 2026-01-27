#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s;
    int choice;
    do
    {   
        cout<<"---SET MENU---"<<endl;
        cout<<"1. Insert a value"<<endl;
        cout<<"2. Display all elements"<<endl;  
        cout<<"3. Union"<<endl;
        cout<<"4. Intersection"<<endl;
        cout<<"5. Difference"<<endl;    
        cout<<"6. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)      
        {
            case 1:
                int value;
                cout<<"Enter value to insert: ";
                cin>>value;
                s.insert(value);
                break;
            case 2:
                cout<<"Elements in the set are: ";
                for(auto it = s.begin(); it != s.end(); ++it)
                    cout<<*it<<" ";
                cout<<endl;
                break;
            case 3:
                {
                    int n, val;
                    set<int> s2;
                    cout<<"Enter number of elements in second set for Union: ";
                    cin>>n;
                    cout<<"Enter elements of second set: ";
                    for(int i=0; i<n; i++)
                    {
                        cin>>val;
                        s2.insert(val);
                    }
                    set<int> unionSet = s; // start with first set
                    unionSet.insert(s2.begin(), s2.end()); // insert elements of second set
                    cout<<"Union of sets: ";
                    for(auto it : unionSet)
                        cout<<it<<" ";
                    cout<<endl;
                }
                break;
            case 4:
                {
                    int n, val;
                    set<int> s2;
                    cout<<"Enter number of elements in second set for Intersection: ";
                    cin>>n;
                    cout<<"Enter elements of second set: ";
                    for(int i=0; i<n; i++)
                    {
                        cin>>val;
                        s2.insert(val);
                    }
                    cout<<"Intersection of sets: ";
                    for(auto it : s)
                    {
                        if(s2.find(it) != s2.end())
                            cout<<it<<" ";
                    }
                    cout<<endl;
                }
                break;
            case 5:
                {
                    int n, val;
                    set<int> s2;
                    cout<<"Enter number of elements in second set for Difference (s - s2): ";
                    cin>>n;
                    cout<<"Enter elements of second set: ";
                    for(int i=0; i<n; i++)
                    {
                        cin>>val;
                        s2.insert(val);
                    }
                    cout<<"Difference of sets (s - s2): ";
                    for(auto it : s)
                    {
                        if(s2.find(it) == s2.end())
                            cout<<it<<" ";
                    }
                    cout<<endl;
                }
                break;    
            case 6:
                break;
            default:
                cout<<"Invalid choice!"<<endl;
        }
    } while(choice != 6);
}
