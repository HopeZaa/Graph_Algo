# Kruskal's Algorithm (Minimum Spanning Tree)

## Problem Statement

Given a **weighted**, **undirected**, and **connected** graph with `V` vertices and `E` edges, find the **sum of the weights** of the edges in the **Minimum Spanning Tree (MST)** using **Kruskal's Algorithm**.

The graph is represented as an edge list `edges[][]`, where:

```text
edges[i] = [u, v, w]
```

indicates an undirected edge between vertices `u` and `v` with weight `w`.

---

## Examples

### Example 1

**Input**

```text
V = 3
E = 3

edges = [
  [0, 1, 5],
  [1, 2, 3],
  [0, 2, 1]
]
```

**Graph**

![Graph Example 1](https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/888914/Web/Other/blobid0_1745301795.jpg)

**Output**

```text
4
```

**Explanation**

The Minimum Spanning Tree is shown below.

![MST Example 1](https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/888914/Web/Other/blobid1_1745301818.jpg)

The total weight of the MST is:

```text
1 + 3 = 4
```

---

### Example 2

**Input**

```text
V = 2
E = 1

edges = [
  [0, 1, 5]
]
```

**Graph**

![Graph Example 2](https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/888914/Web/Other/blobid2_1745301846.jpg)

**Output**

```text
5
```

**Explanation**

Only one spanning tree is possible, so its total weight is `5`.

---

## Constraints

- `2 ≤ V ≤ 1000`
- `V - 1 ≤ E ≤ (V × (V - 1)) / 2`
- `1 ≤ w ≤ 1000`
- The graph is connected.
- The graph contains no self-loops or multiple edges.
