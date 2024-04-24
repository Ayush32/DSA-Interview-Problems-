#include<bits/stdc++.h>
using namespace std;


int main() {
    vector<int>input = {3,3,2,1};
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;
    for(int i = 0;i<input.size();i++)
    {
        if(max1  <= input[i]) {
            max3 = max2;
            max2 = max1;
            max1 = input[i];
        }
        else if(max2  <= input[i]) {
            max3 = max2;
            max2 = input[i];
        }
        else if(max3 <= input[i]){
            max3 = input[i];
        }
         
    }
    cout << max1 << " " << max2 << " " << max3;

    cout << endl;
    int n = 6;
    int k = 2;
     for (int i = 0; i < n; i++){
             i*= k;
             
             cout << i << " ";
           
             
     }
 
    cout << endl;

    cout << '2' - '0';

    return 0;
}