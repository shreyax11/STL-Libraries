#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
//Sort a vector in:
    
    //ascending order
    sort(vec1.begin(),vec1.end());
    cout<<"sorted vector in ascending order is : ";
    for(auto it: vec1)
        cout<<it<<" ";
    cout<<endl;

    //descending order
    sort(vec1.begin(),vec1.end(),greater<int>());
    cout<<"sorted vector in descending order is : ";
    for(auto it: vec1)
        cout<<it<<" ";
    cout<<endl;
  return 0;
}
