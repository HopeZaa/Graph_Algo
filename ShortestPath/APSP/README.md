# Floyd–Warshall Algorithm (All-Pairs Shortest Path)

## Problem Statement

You are given a **weighted directed graph** represented by an adjacency matrix `dist[][]` of size `n × n`, where:

- `dist[i][j]` represents the weight of the edge from node `i` to node `j`.
- If there is no direct edge between two nodes, `dist[i][j]` is set to `10^8`, representing **infinity**.

The graph **may contain negative edge weights**, but it **does not contain any negative weight cycles**.

Your task is to compute the **shortest distance between every pair of nodes** using the **Floyd–Warshall Algorithm**.

**Note:** Update the `dist[][]` matrix **in place**.

---

## Examples

### Example 1

**Input**

```text
dist = [
  [0, 4, 10^8, 5, 10^8],
  [10^8, 0, 1, 10^8, 6],
  [2, 10^8, 0, 3, 10^8],
  [10^8, 10^8, 1, 0, 2],
  [1, 10^8, 10^8, 4, 0]
]
```

**Graph**

![Graph Example 1](https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/893245/Web/Other/blobid0_1744701272.jpg)

**Output**

```text
[
  [0, 4, 5, 5, 7],
  [3, 0, 1, 4, 6],
  [2, 6, 0, 3, 5],
  [3, 7, 1, 0, 2],
  [1, 5, 5, 4, 0]
]
```

**Result**

![Shortest Paths Example 1](https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/893245/Web/Other/blobid1_1744701370.jpg)

**Explanation**

Each value `dist[i][j]` represents the shortest distance from node `i` to node `j` after considering every possible intermediate node.

---

### Example 2

**Input**

```text
dist = [
  [0, -1, 2],
  [1, 0, 10^8],
  [3, 1, 0]
]
```

**Graph**

![Graph Example 2](https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/893245/Web/Other/blobid2_1744701698.jpg)

**Output**

```text
[
  [0, -1, 2],
  [1, 0, 3],
  [2, 1, 0]
]
```

**Result**

![Shortest Paths Example 2](https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/893245/Web/Other/blobid3_1744701713.jpg)

**Explanation**

The algorithm updates the shortest distances between all pairs of nodes.

- The shortest path from `2` to `0` is `2 → 1 → 0`, with a total cost of `2`.
- The shortest path from `1` to `2` is `1 → 0 → 2`, with a total cost of `3`.

---

## Constraints

- `1 ≤ dist.size() ≤ 100`
- `-1000 ≤ dist[i][j] ≤ 1000`
- `dist[i][j]` may be `10^8`, representing infinity.
- The graph does not contain any negative weight cycles.
