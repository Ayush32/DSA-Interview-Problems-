#include <bits/stdc++.h>
using namespace std;

// void NextGreaterToRight(vector<int>&arr)
// {
//     vector<int>NGR;
//     int n = arr.size();
//     bool flag = false;
// 	for(int i = 0;i < n-1;i++)
// 	{
//         flag = false;
// 		for(int j = i +1; j < n;j++)
// 		{
// 			if(arr[i] < arr[j])
// 			{
// 				NGR.push_back(arr[j]);
//                 flag = true;
// 				break;
// 			}
// 		}
//         if(flag == false)
//         {
//             NGR.push_back(-1);
//         }
		 
// 	}
// 	NGR.push_back(-1);

//     for(auto it : NGR)
//     {
//         cout << it << " ";
//     }
// }

void NextGreaterToLeft(vector<int>&arr)
{
    stack<int>s;
    vector<int>NSL(arr.size(),0);
    int n = arr.size();
    bool flag = false;
	for(int i = 0;i < n;i++)
	{
        if(s.empty())
            NSL[i] = -1;

        else if(s.size() > 0 && s.top() < arr[i])
        {
            NSL[i] = s.top();
        }
        else if(s.size() > 0 && s.top() >= arr[i])
        {
            while(s.size() > 0 && s.top() >= arr[i])
                s.pop();
            if(s.size() == 0)
                NSL[i] = -1;
            else
                NSL[i] = s.top();
        }
        s.push(arr[i]);

    }
    for(auto it : NSL)
    {
        cout << it << " ";
    }
}


int main()
{
    vector<int>arr = {7, 12, 1, 20};
    NextGreaterToLeft(arr);
    return 0;

}