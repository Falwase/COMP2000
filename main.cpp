#include "Sort.h"
#include "BubbleSort.h"

#include <vector>
#include <iostream>

int main() {

    BubbleSort bs = BubbleSort();

    std::vector<int> input = {5, 6, 2, 4, 1, 3};

    input = bs.sort(input);

    for(int i = 0; i < input.size(); i++) {
        std::cout << input[i] << std::endl;
    }
}