#include<iostream>
using namespace std;
#include<vector>

int main()
{
    //Find the sum of all elements in a vector.
    vector<int>vec1={1,2,3,4,5};
    int sum=0;
    for(auto it :vec1)
    {
        sum+=it;
    }
    cout<<"sum of all elements in vector is "<<sum<<endl;
  return 0;
}
