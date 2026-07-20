# Flood Fill Algorithm

## Problem Statement

You are given a 2D grid `image[][]`, where each `image[i][j]` represents the color of a pixel in an image. You are also given a starting pixel `(sr, sc)` and a new color `newColor`.

Your task is to perform a **Flood Fill** starting from the pixel `(sr, sc)` by changing its color to `newColor`. All **4-directionally connected** pixels (up, down, left, right) that have the **same original color** as the starting pixel should also be changed to `newColor`.

**Note:** Only horizontal and vertical neighbors are considered connected. Diagonal neighbors are **not** connected.

---

## Examples

### Example 1

**Input**

```text
image[][] = [
  [1, 1, 1, 0],
  [0, 1, 1, 1],
  [1, 0, 1, 1]
]

sr = 1
sc = 2
newColor = 2
```

**Original Image**

![Original Image](https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/705720/Web/Other/blobid0_1744378665.jpg)

**Output**

```text
[
  [2, 2, 2, 0],
  [0, 2, 2, 2],
  [1, 0, 2, 2]
]
```

**Result**

![Flood Fill Result](https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/705720/Web/Other/blobid1_1744378699.jpg)

**Explanation**

Starting from pixel `(1, 2)` with the original color `1`, flood fill changes all connected pixels with the same color to `2`.

Final image:

```text
[
  [2, 2, 2, 0],
  [0, 2, 2, 2],
  [1, 0, 2, 2]
]
```

---

### Example 2

**Input**

```text
image[][] = [
  [0, 1, 0],
  [0, 1, 0]
]

sr = 0
sc = 1
newColor = 0
```

**Output**

```text
[
  [0, 0, 0],
  [0, 0, 0]
]
```

**Explanation**

Starting from pixel `(0, 1)` with the original color `1`, flood fill changes all connected pixels with color `1` to `0`.

Final image:

```text
[
  [0, 0, 0],
  [0, 0, 0]
]
```

---

## Constraints

- `1 ≤ n ≤ m ≤ 500`
- `0 ≤ image[i][j] ≤ 10`
- `0 ≤ newColor ≤ 10`
- `0 ≤ sr ≤ n - 1`
- `0 ≤ sc ≤ m - 1`
