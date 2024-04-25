class Solution {
public:
    vector<vector<int>> generateMatrix(int size) {
        int n = size;
        int m = size;
        int top = 0; // first row
        int bottom = n-1; // last row
        int left = 0; // first col
        int right = m-1;  // last col

        vector<vector<int>>ans(n,vector<int>(m,0));
        int count  = 1;
        while(top <= bottom && left <= right)
        {
            // left to right
            for(int i = left;i<= right;i++)
            {
                ans[top][i] = count++;
                
            }
            top++;
            // top to down
            for(int i = top;i<=bottom;i++)
            {
                ans[i][right] = count++;;
            }
            right--;
            // right to left;
            for(int i = right;i >= left;i--)
            {
                    ans[bottom][i] = count++;
            }
            bottom--;
            
            // bottom to top
            for(int i = bottom;i >= top;i--)
            {
                    ans[i][left] = count++;
            }
            left++;
            
        }
    return ans;
        
    }
};