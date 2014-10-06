//
//  main.cpp
//  FindMedian
//
//  Created by Luis Alberto Lamadrid &
//             Paulina Escalante Campbell
//             on 10/4/14.
//
//  Copyright (c) 2014 Luis Alberto Lamadrid. All rights reserved.
//

#include <iostream>
using namespace std;

// Minimum and maximum helper functions
int max(int a, int b) { return (a > b) ? a : b; }
int min(int a, int b) { return (a < b) ? a : b; }

double FindMedian(int *a1, int s1, int e1, int *a2, int s2, int e2){
    int mid1 = (s1 + e1) / 2;
    int mid2 = (s2 + e2) / 2;
    
    if ((e1 - s1 == 1) && (e2 - s2 == 1)){
        double num1 = max(a1[s1], a2[s2]);
        double num2 = min(a1[e1], a2[e2]);
        return (num1 + num2) / 2;
    }
    
    if (a1[mid1] < a2[mid2]) {
        return FindMedian(a1, mid1, e1, a2, s2, mid2);
    }
    else if ( a1[mid1] > a2[mid2]){
        return FindMedian(a1, s1, mid1, a2, mid2, e2);
    }
    
    // returning an error...
    return -1;
}

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
        
        cout << "Median case " << count << ": ";
        cout << FindMedian(arr1, 0, array_size, arr2, 0, array_size) << endl;
        count++;
    }
    
    return 0;
}

