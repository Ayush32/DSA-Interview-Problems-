#include<bits/stdc++.h>
using namespace std;

void printNto1(int N){
    // base condition

    if(N == 0)
        return;

    cout << N << " ";
    //  hypothsesis condtion
    printNto1(N-1);
}

int main()
{
    int  N  = 7;
    printNto1(N);

    return 0;
}