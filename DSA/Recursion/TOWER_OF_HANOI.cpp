// Three Condition
// 1 - Move only one disk at a time
// 2 - Larger disk cannot be place above on smaller disk
// 3 - Middle tower used as a Helper Function

#include <bits/stdc++.h>
using namespace std;

void TOH(int n, int s, int h, int d, int &count)
{
    if(n == 0)
    {
        return;
    }
    TOH(n-1,s,h,d,count);
    count++;
   cout << "Move disk " << n << " from rod " << s 
         << " to rod " << d << endl; 

    TOH(n-1,h,d,s,count);


}
int main()
{
    int n = 1;
    int s = 1, h = 2, d = 3;
    int count = 0;
    TOH(n,s,h,d,count);
    cout << count;
    return 0;
}