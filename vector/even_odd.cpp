#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
    //Count even and odd numbers in a vector.
    int count_even=0;
    int count_odd=0;
    for(auto it: vec1)
    {
        if(it%2==0)
            count_even++;
        else
            count_odd++;
    }
    cout << "Even: " << count_even << " Odd: " << count_odd << endl;
  return 0;
}
