#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v = {10,20,30,40};

    int key = 30;
    bool found = false;

    for(int x : v) {

        if(x == key) {
            found = true;
            break;
        }
    }

    if(found)
        cout << "Found";
    else
        cout << "Not Found";
}