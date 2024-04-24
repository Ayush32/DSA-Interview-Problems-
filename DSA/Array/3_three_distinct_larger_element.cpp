#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    // vector<int>arr = {1,5,8,9,20,24,45,67}; // every number present only one
     vector<int>arr = {1,6,7,5,6,7,}; // some number present two times, max1 = 7, max2 = 6
     vector<int>arr = {1,6,7,5,6,7,7}; // some number present three times, max1 = 7, max2 = 6, max3 = 5
    int maximumElement = INT_MIN;
    int secondMaximumElement = INT_MIN;
    int thirdMaximumElement = INT_MIN;
    int size = arr.size();
    for(int i  = 0; i < size;i++)
        {
            if(arr[i] > maximumElement)
            {
                thirdMaximumElement = secondMaximumElement;
                secondMaximumElement = maximumElement;
                maximumElement = arr[i];
            }
            // what if input is like is, {1,6,7,8,5,6,7}
            // arr[i] != maximumElement - we want distinct maximum numbers, if the maximum numnber present two times
            // then we take anther number which is smaller than 7
            else if(arr[i] > secondMaximumElement && arr[i] != maximumElement)
            {
                thirdMaximumElement = secondMaximumElement;
                secondMaximumElement = arr[i];
            }
            else if(arr[i] > thirdMaximumElement && arr[i] != secondMaximumElement && arr[i] != maximumElement)
            {
                thirdMaximumElement = arr[i];
            }
        }
    cout << maximumElement << " " << secondMaximumElement << " " << thirdMaximumElement;
    return 0;
}