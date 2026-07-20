# Breadth First Search (BFS) of Graph

## Problem Statement

Given a connected undirected graph containing `V` vertices represented by a 2D adjacency list `adj[][]`, where each `adj[i]` contains the vertices connected to vertex `i`, perform a **Breadth First Search (BFS)** traversal starting from vertex `0`.

Visit the vertices **from left to right** according to the order in the given adjacency list, and return the BFS traversal as a list.

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
[0, 2, 3, 1, 4]
```

**Explanation**

Starting from vertex `0`:

1. Visit `0`
2. Enqueue its neighbors in order: `2`, `3`, `1`
3. Visit `2` and enqueue `4`
4. Visit `3`
5. Visit `1`
6. Visit `4`

Final BFS traversal:

```text
[0, 2, 3, 1, 4]
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
2. Enqueue `1`, `2`
3. Visit `1`
4. Visit `2` and enqueue `3`, `4`
5. Visit `3`
6. Visit `4`

Final BFS traversal:

```text
[0, 1, 2, 3, 4]
```

---

## Constraints

- `1 ≤ V = adj.size() ≤ 10^4`
- `0 ≤ adj[i][j] ≤ 10^4`
