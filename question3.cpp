def dfs_traversal(adj):
    V = len(adj)
    visited = [False] * V  
    result = [] 

    def dfs(node):
        visited[node] = True 
        result.append(node)
        for neighbor in adj[node]:
            if not visited[neighbor]:
                dfs(neighbor)  

    dfs(0)
    
    return result

adj = [[1, 2], [0, 2], [0, 1, 3, 4], [2], [2]]

output = dfs_traversal(adj)

print(output)
