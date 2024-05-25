// # Approach 1 - Using Hash set T.C - O(N*logn(n)) + O(N), S.C - O(n)

int removeDuplicates(int arr[], int n) {
  unordered_set< int > set;
  for (int i = 0; i < n; i++) {
    set.insert(arr[i]);
  }
  int k = set.size();
  int j = 0;
  for (int x: set) {
    arr[j++] = x;
  }
  return k;
}

// Approach 2 - Inplace Two Pointer
// Intution - Intuition: We can think of using two pointers ‘i’ and ‘j’, we move ‘j’ till we don't get a number arr[j] which is different from arr[i].
//  As we got a unique number we will increase the i pointer and update its value by arr[j]. 
vector<int>arr = {1,2,,3}
int main()
{
    int i = 0; // increment pointer i when we get the the number at arr[i] is diff from arr[j], i.e unique
    for(int j = 1;j < nums.size();j++) // move j until the arr[j] is diff from arr[i]
    {
        if(arr[i] != arr[j]){ // at this point increase i pointer and update the value of arr[i]  with arr[j]
        {
            i++;
            arr[i] = arr[j];
        }
        }
    }
}