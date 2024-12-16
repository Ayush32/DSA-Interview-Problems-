#include <bits/stdc++.h>
using namespace std;

int main() {
 
    move zeros to an end
    vector<int>v1 = {1,1,2,2,1,1,1,1,1,1,1,2,2};

    
    // o/p - 1,5,6,,8
    int maximumOnes = INT_MIN;
    int countOnes = 0;
    for(int i = 0;i < v1.size();i++)
    {
        if(v1[i] == 1) // increment count value when the current ith value is 1
            countOnes++;
        else { // when we get diff number then we take store the count in our max variable, repeat untile the size of arr
            maximumOnes = max(maximumOnes,countOnes);
            countOnes = 0; // update count vlue  to 0
        }
    }
    cout << maximumOnes;
   
    return 0;
}