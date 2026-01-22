#include<iostream>
using namespace std;
#include<vector>
//Find the maximum and minimum element in a vector.

int main()
{
    int maxV=vec1[0];
    int minV=vec1[0];
    for(auto it : vec1)
    {
        if(it>maxV)
            maxV = it;
        if(it<minV)
            minV = it;
    }
    cout << "Max: " << maxV << " Min: " << minV << endl;
  return 0;
}
