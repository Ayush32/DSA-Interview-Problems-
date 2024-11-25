import heapq
def topKFrequent(words,k):
    d = dict()

    for i in range(len(words)):
        if words[i] not in d:
            d[words[i]] = 1
        else:
            d[words[i]] += 1

    print(d)   
    min_heap = []
    for word,freq in d.items():
        heapq.heappush(min_heap,[-freq,word])

    print(min_heap)      

    res = []
    for i in range(k):
        freq,word = heapq.heappop(min_heap)
        res.append(word)

    return res


words = ["the","day","is","sunny","the","the","the","sunny","is","is"]
k = 4
print(topKFrequent(words,k))