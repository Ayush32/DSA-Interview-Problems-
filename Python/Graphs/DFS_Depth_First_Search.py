def dfs(self,node,adj,visited,ls):
        visited[node] = True
        ls.append(node)
        for x in adj[node]:
            if not visited[x]:
                self.dfs(x,adj,visited,ls)
            
def dfsOfGraph(self, adj):
    # code here
    # adj = [[] for _ in range()]
    visited = [False] * len(adj)
    # for u,v in edges:
    #     adj[u].append(v)
    #     adj[v].append(u)
        
    ls = []
    self.dfs(0,adj,visited,ls)
    return ls
