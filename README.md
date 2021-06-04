# Searching-Algorithms-CPP
 The various C++ searching algorithms

These are the implenetations of Searching algorithms:

1. Linear search

Time complexity: O(n) where n is the size of the array.

Space Complexity: O(1)

There is an improved linear search which works majorly on the position of the element hence will take nearly n/2 rather than n searches to find the middle most element.
It works by checking the values at both end of the array. This implementation was inspired from the GeeksForGeeks post on Searching(https://www.geeksforgeeks.org/linear-search/?ref=lbp).

2. Binary search

It uses the approach of decrease and conquer which is similar to divide and conquer but here you decrease the part of array to search at a constant rate until you find the element or the array is checked. The condition for Binary search is that it has to be sorted before implemented

Time Complexity: O(logn)

Space Complexity: O(1) in case of iterative implementation
                  O(log n) for recursive solution for stack space for recursive calls.