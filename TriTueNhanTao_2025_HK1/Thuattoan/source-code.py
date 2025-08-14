graph1 = {
    's': ['d', 'e', 'p'],
    'd': ['b', 'c'],
    'e': ['h', 'r'],
    'p': ['q'],
    'b': ['a'],
    'c': ['a'],
    'h': ['p', 'q'],
    'r': ['f'],
    'q': [],
    'a': [],
    'f': ['c', 'g'],
    'g': []
}

graph2 = {
    'a': ['b', 'c'],
    'b': ['d', 'a'],
    'c': ['k', 'a'],
    'd': ['e', 'm', 'b'],
    'k': ['h', 'c'],
    'e': ['n', 'd'],
    'm': ['n', 'g', 'd'],
    'h': ['k', 's'],
    's': ['h', 'f'],
    'f': ['s', 'p'],
    'p': ['q', 'f'],
    'q': ['r', 'p'],
    'r': ['t', 'q'],
    't': ['g', 'r'],
    'g': ['t', 'm'],
    'n': ['m', 'e']
}

graph3 = {
    'A': ['B', 'C'],
    'B': ['A', 'C', 'D'],
    'C': ['A', 'B', 'D'],
    'D': ['B', 'C', 'E', 'F', 'G'],
    'E': ['D', 'G'],
    'F': ['D', 'G'],
    'G': ['E', 'F', 'G']
}

def bfs(graph, start, end):
    visited = [] #node da vien tham
    queue = []

    #push the first path into the queue
    queue.append([start])
    while queue:
        #get the first path from the queue
        path = queue.pop(0)
        #get the last node from the path
        node = path[-1]
        #path found
        if node == end:
            return path
        visited.append(node)
        #enumerate all adjacent nodes, construct a new path and push it into the queue
        for neighbour in graph.get(node, []):
            if neighbour not in visited:
                new_path = list(path)
                new_path.append(neighbour)
                queue.append(new_path)

print("Thuat toan BFS:")
print(f"Duong di tu S den G cho do thi 1: {bfs(graph1, 's', 'g')}")
print(f"Duong di tu S den G cho do thi 2: {bfs(graph2, 's', 'g')}")
print(f"Duong di tu A den G cho do thi 3: {bfs(graph3, 'A', 'G')}")

def dfs(graph, start, end):
    #maintain a stack of paths
    visited = []
    stack = []

    #push the first path into the stack
    stack.append([start])
    while stack:
        #get the last path from the stack (LIFO)
        path = stack.pop()
        node = path[-1]
        #path found
        if node == end:
            return path
        visited.append(node)
        #add new path for the stack for each unvisited neighbor
        for neighbor in graph.get(node, []):
            if neighbor not in visited:
                new_path = list(path)
                new_path.append(neighbor)
                stack.append(new_path)

print("Thuat toan DFS:")
print(f"Duong di tu S den G cho do thi 1: {dfs(graph1, 's', 'g')}")
print(f"Duong di tu S den G cho do thi 2: {dfs(graph2, 's', 'g')}")
print(f"Duong di tu A den G cho do thi 3: {dfs(graph3, 'A', 'G')}")
