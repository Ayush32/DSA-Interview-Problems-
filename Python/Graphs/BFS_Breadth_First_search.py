from collections import deque

def bfs(adj_list, start):
    """Perform BFS traversal from the given start vertex."""
    queue = deque([start])
    visited = [False] * len(adj_list)
    visited[start] = True

    while queue:
        curr = queue.popleft()
        print(curr, end=" ")
        for neighbor in adj_list[curr]:
            if not visited[neighbor]:
                visited[neighbor] = True
                queue.append(neighbor)

def add_undirected_edge(adj_list, u, v):
    """Add an undirected edge to the graph."""
    adj_list[u].append(v)
    adj_list[v].append(u)

if __name__ == "__main__":
    # Initialize graph with 5 vertices
    vertices = 5
    adj_list = [[] for _ in range(vertices)]

    # Add edges
    edges = [(0, 1), (0, 2), (1, 3), (1, 4), (2, 4)]
    for u, v in edges:
        add_undirected_edge(adj_list, u, v)

    # Perform BFS
    print("BFS starting from vertex 0:")
    bfs(adj_list, 0)
