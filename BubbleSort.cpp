#ifndef BUBBLESORT_CPP
#define BUBBLESORT_CPP

#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <vector>

std::vector<int> BubbleSort::sort(std::vector<int> list) {

    bool swap = true;
      while(swap){
        swap = false;
        for (int i = 0; i < list.size()-1; i++) {
            if (list[i]>list[i+1] ){
                list[i] += list[i+1];
                list[i+1] = list[i] - list[i+1];
                list[i] -= list[i+1];
                swap = true;
            }
        }
    }
    return list;
}

#endif