#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;
    int choice, x;
    do
    {
        cout<<"\n----- QUEUE MENU -----\n";
        cout<<"1. Enqueue element\n";
        cout<<"2. Dequeue element\n";   
        cout<<"3. Front element\n";
        cout<<"4. Rear element\n";
        cout<<"5. Size\n";
        cout<<"6. Check if empty\n";
        cout<<"7. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter element to enqueue: ";
            cin>>x;
            q.push(x);
            cout<<"Element enqueued.\n";
            break; 
        case 2:
            if(q.empty())
                cout<<"Queue is empty. Cannot dequeue.\n";
            else
            {
                q.pop();
                cout<<"Front element dequeued.\n";
            }
            break;
        case 3:
            if(q.empty())
                cout<<"Queue is empty.\n";
            else
                cout<<"Front element: "<<q.front()<<endl;
            break;
        case 4:     
            if(q.empty())
                cout<<"Queue is empty.\n";
            else
                cout<<"Rear element: "<<q.back()<<endl;
            break;
        case 5:
            cout<<"Size of queue: "<<q.size()<<endl;    
            break;
        case 6:
            if(q.empty())
                cout<<"Queue is empty.\n";
            else
                cout<<"Queue is not empty.\n";
            break;
        case 7:
            cout<<"Exiting...\n";  
            exit(0);
        default:
            cout<<"Invalid choice. Please try again.\n";         
        }
    }while(1);
    return 0;
}
