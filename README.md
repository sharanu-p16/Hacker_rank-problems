# HackerRank-3rdSem-Portfolio

Activity 8: Algorithmic Problem-Solving & Portfolio Integration (Portfolio Building B25CS0311)

**HackerRank profile:** https://www.hackerrank.com/profile/sharanu_ppatil
**Badge:** Problem Solving, 3 stars

## Required problems

| # | Problem | Language | Time | Space | Result |
|---|---|---|---|---|---|
| 1 | Diagonal Difference | C++ | O(N) | O(1) | ![](screenshots/diagonal_difference_1.png) |
| 2 | Dynamic Array | C++ | O(N + Q) | O(N) | ![](screenshots/dyanmic_arrays.png) |
| 3 | Time Conversion | C++ | O(1) | O(1) | ![](screenshots/time_conversion.png) |
| 4 | Compare the Triplets | C++ | O(1) | O(1) | ![](screenshots/compare_the_triplets.png) |
| 5 | Sparse Arrays | C++ | O(N + Q) | O(N) | ![](screenshots/sparse_arrays.png) |

## Extra problems (for the badge)
Stock Maximize, Find the Median, Closest Numbers, Mini-Max Sum.


## Badge
![HackerRank profile](screenshots/profile.png)
![3-star Problem Solving badge](screenshots/badges_01.png)

## Approach notes
- **Sparse Arrays:** an `unordered_map` counts each string once, so each query is an O(1) lookup instead of a nested loop.
- **Dynamic Array:** `vector<vector<int>>` with the XOR index formula.
- **Time Conversion:** only the hour changes; 12 AM and 12 PM are the special cases.