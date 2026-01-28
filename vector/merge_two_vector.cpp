#include<iostream>
#include<vector>
using namespace std;
int main()
{
  //Merge two vectors into one.
    vector<int> v1 = {1,3,5,7};
    vector<int> v2 = {2,4,6,8};
    vector<int> merged;
    int i = 0, j = 0;
    while (i < v1.size() && j < v2.size()) 
    {
        if (v1[i] < v2[j])
            merged.push_back(v1[i++]);
        else
            merged.push_back(v2[j++]);
    }
    while (i < v1.size())
        merged.push_back(v1[i++]);
    while (j < v2.size())
        merged.push_back(v2[j++]);
    cout << "Sorted merged vector: ";
    for (int x : merged)
        cout << x << " ";
    cout << endl;
  return 0;
}
