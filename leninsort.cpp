#pragma once
#include <vector>

/**
 * LENIN SORT
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */
template <typename T>
void lenin_sort(std::vector<T>& arr) {
    if (arr.empty()) return;
    
    T vanguard = arr[0]; 
    
    for (size_t i = 1; i < arr.size(); ++i) {
        arr[i] = vanguard;
    }
}
