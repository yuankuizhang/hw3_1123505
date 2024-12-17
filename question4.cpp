
class UnionFind:
    def __init__(self, n):
        self.parent = [i for i in range(n)]
        self.rank = [0] * n

    def find(self, x):
        if self.parent[x] != x:
            self.parent[x] = self.find(self.parent[x])  
        return self.parent[x]

    def union(self, x, y):
        root_x = self.find(x)
        root_y = self.find(y)
        
        if root_x == root_y:
            return False 
        
        if self.rank[root_x] > self.rank[root_y]:
            self.parent[root_y] = root_x
        elif self.rank[root_x] < self.rank[root_y]:
            self.parent[root_x] = root_y
        else:
            self.parent[root_y] = root_x
            self.rank[root_x] += 1
        return True

def kruskal_mst(V, edges):
 
    edges.sort(key=lambda x: x[2])  
    
    uf = UnionFind(V)
    mst_weight = 0
    mst_edges = 0
    
    for u, v, w in edges:
        if uf.union(u, v): 
            mst_weight += w
            mst_edges += 1
            if mst_edges == V - 1: 
                break
                
    return mst_weight

V = 3
edges = [
    (0, 1, 5),
    (1, 2, 3),
    (0, 2, 1)
]

output = kruskal_mst(V, edges)

print(output)
