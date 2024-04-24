#include<bits/stdc++.h>
using namespace std;

// void twoMergeSorted(vector<int>&v1,vector<int>&v2){
//     // T.C - O(n + m)
//     // S.C - O(n + m)

//     int n = v1.size();
//     int m = v2.size();
//     vector<int>v3(n+m,0);
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     while(i <= n && j <= m)
//     {
//         if(v1[i] <= v2[j]){
//             v3[k++] = v1[i++];
//         }
//         else {
//             v3[k++] = v2[j++];
//         }
//     }

//     while(i <= m){
//         v3[k++] = v1[i++];
//     }
//     while(j <= m){
//         v3[k++] = v2[j++];
//     }

//     for(auto it : v3) {
//         cout << it << " ";
//     }

// }

void twoMergeSorted(vector<int>&v1,vector<int>&v2){
    // T.C - O(n + m)
    // S.C - O(n + m)

    int n = v1.size();
    int m = v2.size();
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < n && j < m)
    {
        if(v1[i] == 0){
            v1[i] = v2[j++];
        }
        i++;
    }
    i = 0;
    n = v1.size();

    for(int k = 0;k<n;k++)
    {
        for(int i = k+1;i<n;i++){
        if(v1[k] > v1[i]){
            swap(v1[k],v1[i]);
        }
        }
    }
        
    for(auto it : v1) {
        cout << it << " ";
    }
    
    

}

// inplace algorithm



int main(){
    vector<int>v1 = {2,5,7,0,0,0};
    vector<int>v2 = {1,2,3};
    twoMergeSorted(v1,v2);
    return 0;
}