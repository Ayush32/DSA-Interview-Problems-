#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    vector<int>arr = {2,2,1};
    int maximumElement = arr[0];
    int size = arr.size();
    for(int i  = 0; i < size;i++)
        {
            if(arr[i] > maximumElement)
                maximumElement = arr[i];
        }
    cout << maximumElement;
    return 0;
}