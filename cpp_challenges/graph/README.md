# Graph challenges

### Count Unreachable Pairs of Nodes in an Undirected Graph
#### Challenage
You are given an integer `n`. There is an undirected graph with `n` nodes, numbered from `0` to `n - 1`. You are given a 2D integer array edges where `edges[i] = [ai, bi]` denotes that there exists an undirected edge connecting nodes `ai` and `bi`.

Return the number of pairs of different nodes that are unreachable from each other.
Foud at [LeetCode#2316](https://leetcode.com/problems/count-unreachable-pairs-of-nodes-in-an-undirected-graph/description/)

#### Solutions
##### Approach:
1. Build the adjacency list of the graph which is undirected.
2. Find connected components using BFS and store their sizes.
3. Compute the number of disconnected pairs:
    - Total possible pairs: `n(n-1)/2`
    - Subtract connected pairs within each component.

##### Time Complexity:
- Building the graph: `O(E)`
- Finding connected components: `O(V+E)`
- Computing disconnected pairs: `O(V)`
- Overall Complexity: `O(V+E)`