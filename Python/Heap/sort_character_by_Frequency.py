import heapq
def frequencySort(s):
        d = dict()
        for i in range(len(s)):
            if s[i] not in d:
                d[s[i]] = 1
            else:
                d[s[i]] += 1

        max_heap = []
        for char,freq in d.items():
            heapq.heappush(max_heap,[-freq,char])
        
        res = ""
        while max_heap:
            freq,char = heapq.heappop(max_heap)
            res = res + (char * (-freq))
        
        return res

str =  "treeest"
print(frequencySort(str))