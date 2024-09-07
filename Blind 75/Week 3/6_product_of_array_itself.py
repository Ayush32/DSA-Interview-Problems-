''' we will use a prefix product and suffix product array'''
'''For obtaining Prefix Array, Start from the first Index and multiply element one by one and store it in an array.
Similarly, for obtaining a Suffix Array, Start from the end and multiply elements one by one, and store them in an array. 
Now moving on to every index, 
take the product of prefix and suffix Array to get the product of the whole array except itself.'''
def productArrayItself(arr):
    n = len(arr)
    prefixArray = [0] * n
    prefixArray[0] = 1
    suffixArray = [0] * n
    suffixArray[n-1] = 1
    
    for i in range(1,n):
        prefixArray[i] = prefixArray[i - 1] * arr[i-1]
    print(prefixArray)
    
    for i in range(n-2,-1,-1):
        suffixArray[i] = suffixArray[i+1] * arr[i+1]
    print(suffixArray)
    for i in range(n):
        arr[i] = suffixArray[i] * prefixArray[i]
        
    return arr

''' it is just a optimized version without using the suffix array
We will create a prefix Array and then after that instead of creating a suffix array separately, 
start from the end of the array and maintain a variable suffixproduct which will keep track of the suffix product up to the current index.
'''


def productArrayItselfOptimized(arr):
    n = len(arr)
    ans = [0] * n
    prefixArray = [0] * n
    prefixArray[0] = 1
    
    for i in range(1,n):
        prefixArray[i] = prefixArray[i - 1] * arr[i-1]
    
    suffixProduct = 1
    for i in range(n-1,-1,-1):
        ans[i] = suffixProduct * prefixArray[i]
        suffixProduct = suffixProduct * arr[i]
        
    return ans


arr = [1,2,3,4,5]
# prefixarray[] = [1,1,2,6,24]
# sufficarray[] = [120,60,20,5,1]
# result[] = [120,60,40,30,24]
print(productArrayItself(arr))

arr1 = [1,2,3,4,5]
print(productArrayItselfOptimized(arr1))
# prefixarray[] = [1,1,2,6,24]
suffixProd = 1
# ans[]= [,24] , suffixProduct = 1 * 5
# ans[]= [30,24] , suffixProduct = 5 * 4 = 20 
# ans[]= [50,30,24] ans[i] = 20 *2 = 40 , suffixProduct = 20 *3 = 60
# ans[]= [60,50,30,24] ans[i] = 60 * 1 = 60 , suffixProduct = 60 * 2 = 120
# ans[]= [120,60,50,30,24] ans[i] = 120 * 1 = 120 , suffixProduct = 60 * 1 = 120
