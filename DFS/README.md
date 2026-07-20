# Depth First Search (DFS) of Graph

## Problem Statement

Given a connected undirected graph containing `V` vertices represented by a 2D adjacency list `adj[][]`, where each `adj[i]` contains the vertices connected to vertex `i`, perform a **Depth First Search (DFS)** traversal starting from vertex `0`.

Visit the vertices **from left to right** according to the order in the given adjacency list, and return the DFS traversal as a list.

**Note:** Traverse the neighbors in the exact order they appear in the adjacency list.

---

## Examples

### Example 1

**Input**

```text
adj[][] = [
  [2, 3, 1],
  [0],
  [0, 4],
  [0],
  [2]
]
```

**Graph**

![Graph Example 1](https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700203/Web/Other/blobid0_1728647807.jpg)

**Output**

```text
[0, 2, 4, 3, 1]
```

**Explanation**

Starting from vertex `0`:

1. Visit `0`
2. Visit `2` (first neighbor of `0`)
3. Visit `4` (first neighbor of `2`)
4. Backtrack to `2`, then to `0`
5. Visit `3`
6. Backtrack to `0`
7. Visit `1`

Final DFS traversal:

```text
[0, 2, 4, 3, 1]
```

---

### Example 2

**Input**

```text
adj[][] = [
  [1, 2],
  [0, 2],
  [0, 1, 3, 4],
  [2],
  [2]
]
```

**Graph**

![Graph Example 2](https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700203/Web/Other/blobid1_1728648013.jpg)

**Output**

```text
[0, 1, 2, 3, 4]
```

**Explanation**

Starting from vertex `0`:

1. Visit `0`
2. Visit `1`
3. Visit `2`
4. Visit `3`
5. Backtrack to `2`
6. Visit `4`

Final DFS traversal:

```text
[0, 1, 2, 3, 4]
```

---

## Constraints

- `1 ≤ V = adj.size() ≤ 10^4`
- `0 ≤ adj[i][j] ≤ 10^4`
