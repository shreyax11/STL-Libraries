#include<iostream>
#include<vector>
using namespace std;
int main()
{
//Find the second largest element in a vector.
    vector<int>vec3={10,5,8,12,6,15,3};
    int largest=vec3[0];
    int second_largest = -1;
    for(auto it : vec3)
    {
        if(it>largest)
        {
            second_largest = largest;
            largest = it;
        }
        else if(it>second_largest && it!=largest)
            second_largest = it;
    }
    cout<<"second largest element is : "<<second_largest<<endl;
  return 0;
}
