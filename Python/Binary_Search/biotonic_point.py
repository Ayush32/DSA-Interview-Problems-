#User function Template for python3
class Solution:

	def findMaximum(self, arr):
		# code heren
		n = len(arr)
		if n == 1:
            return arr[0]
        if arr[0] > arr[1]: # suppose our first element is greater than its right second element
            return arr[0]

        if arr[n-1] > arr[n - 2]:
            return arr[n - 1]

        start = 1
        end = n - 2
        while start <= end:
            mid = start + (end - start) //2
            if arr[mid] > arr[mid + 1] and arr[mid] > arr[mid - 1]:
                return arr[mid]
            elif arr[mid] < arr[mid + 1]:
                start = mid + 1
            else:
                end = mid - 1
            
        return -1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.findMaximum(arr)
        print(ans)
        tc -= 1
        print("~")

# } Driver Code Ends