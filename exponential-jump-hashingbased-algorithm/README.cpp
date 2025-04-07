##Exponential-Jump--HashingBased-Search-Algorithm

## Exponential Search
## Description

   * Exponential Search is used to find the position of an element in a sorted array. It works by:
Finding a range where the element could be present by doubling the step size (1, 2, 4, 8, etc.).
Once the range is determined, it uses binary search within that range.
Time Complexity
* Best case: O(1)
* Average/Worst case: O(log n)

## Jump Search

## Description

  * Jump Search is another searching algorithm for sorted arrays. It works by jumping ahead by a fixed step size (sqrt(n)) to find the range where the target could be, and then performing a linear search within that range.
## Time Complexity

  *Best case: O(1)
  *Average/Worst case: O(√n)

## Hashing-based Search

## Description
Hashing-based searching involves using a hash table to store elements for fast lookup. A hash function maps keys to indices in the table. Searching is typically O(1) for well-designed hash functions.
## Time Complexity

Best case: O(1) (direct lookup)
Worst case: O(n) (if hash collisions occur)
Comparison of Exponential, Jump, and Hashing-based Search



student information
Name:-Haymanot Derbe 
Id:-RMNS-8525-/23 
Course:-DSA

     