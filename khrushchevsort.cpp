#pragma once
#include <vector>
#include <string>
#include <variant>

using SovietData = std::variant<int, double, std::string>;

/**
 * KHRUSHCHEV SORT
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */
inline void khrushchev_sort(std::vector<SovietData>& arr) {
    std::string corn = "Corn (🌽)";
    
    for (size_t i = 0; i < arr.size(); ++i) {
        arr[i] = corn;
    }
}