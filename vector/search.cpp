#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
//Search an element in a vector (linear search).
    int search_e= 6;
    bool found =false;
    for(auto it: vec1)
    {
        if(it==search_e)
        {
            found = true;
            cout<<"element found in vector"<<endl;
            break;
        }
    }
    if(!found)
        cout<<"element not found in vector"<<endl;
  return 0;
}
