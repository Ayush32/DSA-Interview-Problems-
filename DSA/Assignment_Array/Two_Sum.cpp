#include<bits/stdc++.h>
string read(int n, vector<int> nums, int target)
{
    /*
    Intuition: Basically, in the previous approach we selected one element and then searched for the other one using a loop.
     Here instead of using a loop,
     we will use the HashMap to check if the other element i.e. target-(selected element) exists. 
     Thus we can trim down the time complexity of the problem.

And for the second variant, we will store the element along will its index in the HashMap. 
Thus we can easily retrieve the index of the other element i.e. target-(selected element) without iterating the array.*/
    // Write your code here.
    unordered_map<int,int>mp;
    for(int i = 0;i < n;i++)
    {
        int firstElement = nums[i];
        int secondElement = target- nums[i];
        if(mp.find(secondElement) != mp.end())
        {
            return "YES";
        }
        mp[firstElement] = i;
    }
    return "NO";
}
/*
Time Complexity: O(N), where N = size of the array.
Reason: The loop runs N times in the worst case and searching in a hashmap takes O(1) generally. So the time complexity is O(N).

Note: In the worst case(which rarely happens), the unordered_map takes O(N) to find an element. In that case, the time complexity will be O(N2). 
If we use map instead of unordered_map, the time complexity will be O(N* logN) as the map data structure takes logN time to find an element.

Space Complexity: O(N) as we use the map data structure.
*/