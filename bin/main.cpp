#include <iostream>
#include <vector>

#include <lib/lr1.h>

int main() {
    std::vector<int> arr = {10, 14, 15, 20, 21, 25, 30};
    int result = findPair(arr);
    std::cout << "Quantity of pairs in which the first element is even and the second is odd: " << result << std::endl;
    return 0;
}