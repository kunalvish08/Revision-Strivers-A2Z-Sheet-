 format will be:

1. Problem
2. Hint 1 (very small)
3. Hint 2 (slightly more revealing)
4. Hint 3 (almost the solution)
5. Think & Try Yourself
6. Brute Force
7. Better (if applicable)
8. Optimal
9. Intuition
10. Approach
11. C++ Solution
12. Time & Space Complexity
13. Follow-up Interview Questions

---

# Problem 1: Largest Element in an Array

### Hint 1

You only need **one value** while traversing the array.

---

### Hint 2

Suppose the first element is currently the largest. As you move forward, ask yourself:

"Is the current element larger than my answer?"

---

### Hint 3

Maintain a variable called `largest`.

Whenever

`arr[i] > largest`

update it.

---

## Stop Here ✋

Try writing the code yourself before reading further.

---

# Brute Force

Sort the array.

The last element after sorting is the largest.

### Time Complexity

O(n log n)

### Space Complexity

Depends on sorting algorithm.

---

# Better

Traverse the array.

Compare every element with the current maximum.

Update whenever you find a larger element.

---

# Optimal

Exactly the same as Better.

Since every element must be visited at least once, **O(n)** is the best possible complexity.

---

# Intuition

Imagine you're finding the tallest student in your class.

Start by assuming the first student is the tallest.

Now compare everyone else one by one.

Whenever someone taller appears, replace your answer.

At the end, you'll have the tallest student.

Exactly the same idea works here.

---

# Approach

1. Initialize `largest = arr[0]`.
2. Traverse from index `1` to `n-1`.
3. If `arr[i] > largest`, update `largest`.
4. Return `largest`.

---

# C++ Solution

```cpp
int largestElement(vector<int>& arr) {
    int largest = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }

    return largest;
}
```

---

# Complexity

Time: O(n)

Space: O(1)

---

# Interview Follow-ups

* What if the array contains only negative numbers?
* Can you solve it recursively?
* Can you find both the largest and second largest in one traversal?
* Why can't this be done in less than O(n)?
* What if the array is empty?

