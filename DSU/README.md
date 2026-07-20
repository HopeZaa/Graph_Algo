# Disjoint Set Union (DSU)

## Problem Statement

You are given `n` elements numbered from `1` to `n`. Initially, each element belongs to its own group and is the representative of that group.

You need to process `k` queries of the following two types:

### Type 1: `1 x z`

Perform a **UNION** operation on elements `x` and `z`.

Merge the group containing `x` into the group containing `z` by making the representative of `x` point to the **ultimate representative** of `z`.

After the merge, the representative of `z` becomes the representative of the entire merged group.

### Type 2: `2 x`

Perform a **FIND** operation on element `x`.

Output the representative of the group containing `x`.

### Note

- The representative of an element is the root of its group, i.e., the element whose parent is itself.
- Initially, every element is its own representative.

---

## Examples

### Example 1

**Input**

```text
n = 5
k = 4

queries = [
  [2, 4],
  [2, 1],
  [1, 3, 1],
  [2, 3]
]
```

**Output**

```text
[4, 1, 1]
```

**Explanation**

- `2 4` → Find the representative of `4`. Since `4` is initially in its own group, the answer is `4`.
- `2 1` → Find the representative of `1`. Since `1` is initially in its own group, the answer is `1`.
- `1 3 1` → Merge the group containing `3` into the group containing `1`. Now the parent of `3` becomes `1`.
- `2 3` → The representative of `3` is now `1`.

---

### Example 2

**Input**

```text
n = 6
k = 6

queries = [
  [1, 2, 3],
  [1, 4, 5],
  [2, 2],
  [2, 3],
  [1, 3, 5],
  [2, 4]
]
```

**Output**

```text
[3, 3, 5]
```

**Explanation**

- `1 2 3` → Merge the group containing `2` into the group containing `3`.
- `1 4 5` → Merge the group containing `4` into the group containing `5`.
- `2 2` → Representative of `2` is `3`.
- `2 3` → Representative of `3` is `3`.
- `1 3 5` → Merge the group containing `3` into the group containing `5`. Now `2` also belongs to the same group through `3`.
- `2 4` → Representative of `4` is `5`.

---

## Constraints

- `1 ≤ n, k ≤ 1000`
- `1 ≤ x, z ≤ n`
