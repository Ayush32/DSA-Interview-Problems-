def freqArray(arr):
    freq = dict()
    for i in range(0,len(arr)):
        if arr[i] in freq:
            # if keys is already present in map then increments its frequency
            freq[arr[i]] = freq[arr[i]] + 1
        else:
            # if current element has 0 frequencies, push the value 1 because it occurs first time
            freq[arr[i]] = 1
    return freq

arr = [4,7,4,7,5,5,5,5,5,3,1,2,3,3,3,3]
mp = dict()
mp = freqArray(arr)
# sorted(mp.keys())

for key, values in sorted(mp.items()):
    print(key, " : ", values)

# alternate method
# for key in mp.keys():
#     print(key, " : ", mp[key])