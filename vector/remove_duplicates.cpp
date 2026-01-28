#include<iostream>
#include<vector>
usong namespace std;
int maikn()
{
  //Remove duplicate elements from a vector.
    vector<int> v = {1, 2, 3, 2, 4, 3, 1};
    for (int i = 0; i < v.size(); i++) 
    {
        for (int j = i + 1; j < v.size(); j++) 
        {
            if (v[i] == v[j])
            {    
                v.erase(v.begin() + j);
                j--;
            }
        }
    }
    cout << "Vector after removing duplicates: \t";
    for (int x : v)
        cout << x << " ";
  return 0;
}
