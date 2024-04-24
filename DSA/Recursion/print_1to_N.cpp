#include <bits/stdc++.h>
using namespace std;

//  1 to N
// N = 7 ṇ
// print(N - 1)
//  cout << N;

void print(int N) {
    
    // base condition 
    if(N == 0)
        return;

    // hypothesis - make input smaller at every call
    print(N - 1);
    cout  << N << " ";
}

int main()
 {
    int N = 7;
    print(N);
    return 0;
 }