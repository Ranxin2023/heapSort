// HeapDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include"heap.h"
using namespace std;

int main()
{
    vector<int>arr;
    
    int num=17;
    int i = 0;
    while (i++<10000) {
        arr.push_back(num);
        
        num *= 2;
        if (num > 1000000) {
            num -= 1000000;
        }
        //i++;
    }
    
    heap *h = new heap(MIN_HEAP_FUNC,arr);
    h->heapSort();
    h->printArr();
    //for (int num : arr)cout << num << "\t";
    
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
