#include <iostream>
#include <utility>
#include<vector>
using namespace std;
//here we make a function of same datatype (pair),
//which returns a pair containing sum and difference of two numbers
pair<int, int> sumDiff(int a, int b)
{
    return {a + b, a - b};
}
int main()
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    pair<int, int> result = sumDiff(x, y);
    cout << "Sum = " << result.first << endl;
    cout << "Difference = " << result.second << endl;
    return 0;
}
