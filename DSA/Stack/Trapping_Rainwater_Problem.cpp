#include <bits/stdc++.h>
using namespace std;

long long getTrappedWater(long long *arr, int n)
{
    // Write your code here.
    long long left[n];
    left[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], arr[i]);
    }
    long long right[n];
    right[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = max(right[i + 1], arr[i]);
    }
    long long water = 0;
    for (int i = 0; i < n; i++)
    {
        water += min(left[i], right[i]) - arr[i];
    }
    return water;
}