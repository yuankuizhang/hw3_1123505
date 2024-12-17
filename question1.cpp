
def create_adjacency_list(V, edges):
    # Step 1: Initialize an empty adjacency list
    adjacency_list = [[] for _ in range(V)]
    
    for edge in edges:
        u, v = edge  
        adjacency_list[u].append(v)  # Add v to u's list
        adjacency_list[v].append(u)  # Add u to v's list (because the graph is undirected)
    
    return adjacency_list

V = 5
edges = [[0,1], [0,4], [4,1], [4,3], [1,3], [1,2], [3,2]]

adj_list = create_adjacency_list(V, edges)

print(adj_list)
