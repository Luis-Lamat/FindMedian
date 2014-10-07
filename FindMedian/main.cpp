//
//  main.cpp
//  FindMedian
//
//  Created by Luis Alberto Lamadrid (A01191158) &
//             Paulina Escalante Campbell (A01191962)
//             on 10/4/14.
//
//  Copyright (c) 2014 Luis Alberto Lamadrid. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

// Minimum and maximum helper functions
int max(int a, int b) { return (a > b) ? a : b; }
int min(int a, int b) { return (a < b) ? a : b; }

/*
 * (double) FindMedian
 *
 * Recursive method to find the median of two sorted
 * arrays of the same size. Returns the average median
 * since 2n is always an even number of elements.
 *
 */
double FindMedian(int *a1, int s1, int e1, int *a2, int s2, int e2){
    
    // calculate median of the two subarrays
    int mid1 = (s1 + e1) / 2;
    int mid2 = (s2 + e2) / 2;
    
    // base case two arrays of size 2
    if ((e1 - s1 == 1) && (e2 - s2 == 1)){
        double num1 = max(a1[s1], a2[s2]);
        double num2 = min(a1[e1], a2[e2]);
        return (num1 + num2) / 2;
    }
    
    // divides in subarrays comparing the madians
    // of both arrays...
    if (a1[mid1] < a2[mid2]) {
        return FindMedian(a1, mid1, e1, a2, s2, mid2);
    }
    else if ( a1[mid1] > a2[mid2]){
        return FindMedian(a1, s1, mid1, a2, mid2, e2);
    }
    
    // returning an error...
    return -1;
}

/* -----------------------------  MAIN FUNCTION ----------------------------- */
int main()
{
    // variable declaration
    int cases, array_size, num, count = 1;
    
    // case input
    cin >> cases;
    
    // case while loop
    while (cases--) {
        
        /* --- USER ARRAY DATA INPUT START --- */
        cin >> array_size;
        int arr1[array_size] ,arr2[array_size];
        
        array_size--;
        
        for (int i = 0; i <= array_size; i++) {
            cin >> num; arr1[i] = num; }
        
        for (int i = 0; i <= array_size; i++) {
            cin >> num; arr2[i] = num; }
        /* --- USER ARRAY DATA INPUT END ----- */
        
        // recursive method call and answer output print with format
        cout << "Median case " << count << ": ";
        cout << fixed << setprecision(2) << FindMedian(arr1, 0, array_size,
                                                       arr2, 0, array_size);
        cout << endl;

        count++;
    }
    
    return 0;
}

