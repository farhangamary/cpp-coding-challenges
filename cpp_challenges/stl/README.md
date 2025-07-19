# C++ stl related challenges

## Containers


### 🕹️ Merge k Sorted Lists
####  📜 Challenge
You are given an array of `k` linked-lists `lists`, each linked-list is sorted in ascending order.

_Merge all the linked-lists into one sorted linked-list and return it._

Foud at [LeetCode#23](https://leetcode.com/problems/merge-k-sorted-lists)

#### Solutions
##### Intuition
Initially, I considered a __divide-and-conquer__ approach similar to _merge sort_. The idea was to take the first list as the main linked list and iteratively merge each remaining list into it. However, this approach had a high time complexity of `O(nk log k)` due to repeated merging and traversal.

To optimize this, I explored a two-way merge approach, reducing the need to traverse the entire merged list multiple times. This brought the complexity down to `O(nk)`. However, it still required multiple list traversals, making it inefficient for large inputs.

Finally, I realized that using a __priority queue (min-heap)__ would allow me to efficiently select the smallest node at each step without repeatedly scanning the lists. This approach ensures that each node is processed exactly once, leading to an optimal `O(n log k)` time complexity.

##### Approach
We use a _min-heap (priority queue)_ to efficiently retrieve the smallest available node at any step.

Push all non-null head nodes from the input lists into the priority queue.
The priority queue is structured such that the smallest node (by value) is always on top.
Iterate until the priority queue is empty:
Extract the smallest node (top of the heap).
Append it to our result list.
If the extracted node has a next, push next into the heap.
Since each node is pushed and popped exactly once, and heap operations take `O(log k)` time, the overall complexity is `O(n log k)`, where `n` is the total number of nodes and `k` is the number of linked lists.
This method ensures an efficient and elegant merge of `k` sorted lists! 

##### Complexity
- Heap Operations: `O(log k)` for insertion and removal.
- Total Operations: `O(N log k)`, where `N` is the total number of nodes across all `k` lists.

<hr style="height:3px; background-color:#AAA; border:none;">

### 🕹️ Game of Life

**Difficulty:** Medium  
**Taken from:** [Game of Life on LeetCode](https://leetcode.com/problems/game-of-life/description/)

---

#### 📜 Challenge

Implement the **Game of Life**, a cellular automaton devised by mathematician John Conway.  
You are given a `m x n` board of cells, where:  

- `1` = live cell  
- `0` = dead cell  

Each cell's state in the **next generation** is determined by these rules (based on its 8 neighbors):

1. **Underpopulation**: Any live cell with fewer than 2 live neighbors dies.  
2. **Survival**: Any live cell with 2 or 3 live neighbors lives on.  
3. **Overpopulation**: Any live cell with more than 3 live neighbors dies.  
4. **Reproduction**: Any dead cell with exactly 3 live neighbors becomes a live cell.  

You must compute the next state of the board **in place** (without using extra space).

---

##### 🖋️ Example

##### Input
```text
board = [
  [0,1,0],
  [0,0,1],
  [1,1,1],
  [0,0,0]
]
```

##### Output
```text
[
  [0,0,0],
  [1,0,1],
  [0,1,1],
  [0,1,0]
]
```

---

##### ⚡ Constraints

- `m == board.length`
- `n == board[i].length`
- `1 <= m, n <= 25`
- `board[i][j]` is `0` or `1`.

----
#### Solution

##### 📝 Approach

This solution simulates the Game of Life on a 2D grid by:  

1. **Copying the original board**  
   - We create a copy (`shallowBoard`) to avoid modifying cells while still needing their original state for neighbor checks.  

2. **Iterating over each cell**  
   - For each cell `(i, j)` in the grid, we count its 8 neighbors using a predefined direction vector.  

3. **Applying the Game of Life rules**  
   - **Underpopulation**: Live cell dies if neighbors < 2.  
   - **Overpopulation**: Live cell dies if neighbors > 3.  
   - **Survival**: Live cell stays alive with 2 or 3 neighbors.  
   - **Reproduction**: Dead cell becomes alive with exactly 3 neighbors.  

4. **Updating the board in place**  
   - After applying rules to each cell, the original board is updated directly.

---

##### ⏱ Time and Space Complexity

###### Time Complexity: **O(m × n)**  
- Each cell is visited once.  
- For each cell, counting neighbors takes constant time (8 directions).  

###### Space Complexity: **O(m × n)**  
- A copy of the grid (`shallowBoard`) is used for safe neighbor checks.

Where `m` = number of rows, `n` = number of columns.

---

###### Summary

This approach prioritizes **clarity and correctness** over in-place space optimization. It works efficiently for the constraints of the problem (small grids).

<hr style="height:3px; background-color:#AAA; border:none;">



