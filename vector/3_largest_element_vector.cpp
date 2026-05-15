#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v = {4, 8, 1, 9, 2};

    int mx = v[0];

    for(int i = 1; i < v.size(); i++) {

        if(v[i] > mx) {
            mx = v[i];
        }
    }

    cout << "Largest = " << mx;
}