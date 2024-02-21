#include "lr1.h"
using namespace std;
int findPair(const std::vector<int>& array) {
    int count = 0;
    int i = 0;
    while (i < array.size()-1) {
        if ((array[i] % 2 == 0) && (array[i+1] % 2 == 1))
        {
            count++;
        }
        i++;
    }
    return count;
}
