#include<iostream>
#include<vector>
using namespace std;
int main()
{
  //Find the average of vector elements.
    int n;
    cout<<"enter number of elements in vector to find average: ";   
    cin>>n;
    vector<int>vec_avg(n);
    cout<<"enter elements of vector: ";
    for(auto &it : vec_avg)
        cin>>it;
    double total=0;
    for(auto it: vec_avg)
        total+=it;
    double average = total/vec_avg.size();
    cout<<"average of vector elements is : "<<average<<endl;
  return 0;
}
