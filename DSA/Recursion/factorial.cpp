#include <bits/stdc++.h>
using namespace std;

int factorial(int N)
{
    if(N <= 2)
        return N;

    return N*factorial(N-1);
}

int main()
{
    int n = 2;
    cout << factorial(n);
    return 0;
}