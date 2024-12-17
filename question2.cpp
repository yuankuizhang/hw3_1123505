from collections import deque

def bfs_traversal(adj):
    V = len(adj)  
    visited = [False] * V 
    result = [] 
    queue = deque()  

    queue.append(0)
    visited[0] = True

    while queue:
        node = queue.popleft() 
        result.append(node) 

        for neighbor in adj[node]:
            if not visited[neighbor]: 
                queue.append(neighbor)
                visited[neighbor] = True  

    return result

adj = [[2,3,1], [0], [0,4], [0], [2]]

output = bfs_traversal(adj)

print(output)
