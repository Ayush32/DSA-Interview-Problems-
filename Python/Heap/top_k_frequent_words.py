class Solution:
    def topKFrequent(self, words: List[str], k: int) -> List[str]:
        d = dict()

        for i in range(len(words)):
            if words[i] not in d:
                d[words[i]] = 1
            else:
                d[words[i]] += 1

        
        min_heap = []
        for word,freq in d.items():
            heappush(min_heap,[-freq,word])

            

        res = []
        for i in range(k):
            freq,word = heappop(min_heap)
            res.append(word)

        return res

        