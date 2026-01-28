#include<iostream> 
#include<vector>
using namespace std;
int main()
{
  //Find the frequency of each element in a vector.
    vector<int>freqV={1,2,2,3,3,3,4,4,4,4};
    vector<bool>visited(freqV.size(), false);
    for(int i=0; i<freqV.size();i++)
    {
        if(visited[i]==false)
        {
            int count=1;
            for(int j=i+1;j<freqV.size();j++)
            {
                if(freqV[i]==freqV[j])
                {
                    visited[j]=true;
                    count++;
                }
            }
            cout<<"frequency of "<<freqV[i]<<" is : "<<count<<endl;
        }
    }
  return 0;
}
