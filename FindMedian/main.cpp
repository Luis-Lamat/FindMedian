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

int main()
{
    // variable declaration
    int cases, array_size, num;
    
    // case input
    cin >> cases;
    
    // case while loop
    while (cases--) {
        
        /* --- USER ARRAY DATA INPUT START --- */
        cin >> array_size;
        int arr1[array_size] ,arr2[array_size];
        
        for (int i = 0; i < array_size; i++) {
            cin >> num; arr1[i] = num; }
        
        for (int i = 0; i < array_size; i++) {
            cin >> num; arr2[i] = num; }
        /* --- USER ARRAY DATA INPUT END ----- */
        
    }
    

    
    return 0;
}

