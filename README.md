# Day8-of-43-of-Teachersdaychallenge

1) A. Beautiful Matrix
Problem Description: You are given a 5x5 matrix with 24 zeroes and a single '1'. You can swap adjacent rows or adjacent columns. Find the minimum number of moves to bring the '1' to the center cell (row 3, column 3).

Key Idea/Logic:

Each row swap moves the '1' one step vertically. Each column swap moves the '1' one step horizontally.

The order of swaps doesn't matter (row swaps don't affect column position, and vice-versa).

The minimum number of moves required is simply the sum of the absolute difference between the '1's current row index and the target row index (3), plus the absolute difference between its current column index and the target column index (3). This is known as Manhattan distance.

Read the 5x5 matrix, find the (row, col) coordinates of the '1'.

Calculate abs(row - 3) + abs(col - 3).

Time Complexity: O(1) (since the matrix size is fixed at 5x5, processing it is constant time).

Space Complexity: O(1) (for storing the matrix, or just the coordinates of '1').

Example:
Input:0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
Output: 3 (The '1' is at (2,5). Target is (3,3). Moves = |2-3| + |5-3| = 1 + 2 = 3)

2) A. Next Round
Problem Description: Given n participants' scores and an integer k, determine how many participants will advance. A participant advances if their score is greater than or equal to the score of the k-th place finisher, and their score is positive. The scores are given in non-increasing order.

Key Idea/Logic:

First, find the score of the participant in the k-th place. Since scores are non-increasing, this is a[k-1] (using 0-based indexing for the array).

Iterate through all n participants.

For each participant's score a[i]:

Check if a[i] >= score_at_kth_place.

Check if a[i] > 0.

If both conditions are true, increment a counter.

Print the final count.

Time Complexity: O(N) (to read scores and iterate through them once).

Space Complexity: O(N) (to store the scores).


Example:
Input:

8 5
10 9 8 7 7 7 5 5
Output: 6
Explanation: The 5th place score is 7. Participants with scores 10, 9, 8, 7, 7, 7 (total 6 participants) all meet the criteria (score >= 7 AND score > 0).
