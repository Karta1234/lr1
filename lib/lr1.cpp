#include "lr1.h"
#include <iostream>
using namespace std;

std::pair<vector<int>, int> findPair(const std::vector<int>& array) {
    vector<int> errors;
    int count = 0;
    int i = 0;
    while (i < array.size()-1) {
        if ((array[i] % 2 == 0) && (array[i+1] % 2 == 1))
        {
            count++;
        }
        i++;
    }
    return make_pair(errors, count);
}

