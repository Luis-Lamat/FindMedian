FindMedian
==========

Algorithm to find median of two sorted non-sequential arrays of size n.
This algorithm attempts to solve the following problem:


Problem Description
===================

Given a set of 2n integers data were separated into two arrays of size n, 
and every array was in ascending ordered, and knowing that there are no repeated values. Find the median of the set of data size 2n.
It uses the divide and conquer strategy to design an algorithm that computes the median of 2n data in the two arrays (1 <= n <= 100). The algorithm must have a base 2 logarithmic or better order, "O(log2 n)".


Input
===========

First comes "t" the number of cases, for each case comes the size of the arrays (n), then comes "n" integers of the first array and "n" integers of the second array. The data in the arrays are all positive integers no greather than 10^4.

Output
===========

Each case will come a floating number with two decimal representing the median of all 2n data with the presentation format of the sample input.

Sample Input
==============

    2

    5
    1 4  7  8 10
    2 9 11 14 15

    3
    3 4 5
    1 2 6



Sample Output
==============

    Median case 1: 8.50
    Median case 2: 3.50

