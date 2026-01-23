#include<iostream>
using namespace std;
#include<vector>

int main()
{
    //Reverse a vector.
    vector<int>rev_vec;
    for (int i = vec1.size() - 1; i >= 0; i--)
        rev_vec.push_back(vec1[i]);
    cout<<"reversed vector is : ";
    for(auto it: rev_vec)
        cout<<it<<" ";
    cout<<endl; 
  return 0;
}
