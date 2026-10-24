#pragma once
#include <vector>
#include <iostream>

/**
 * GORBACHEV SORT
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */
template <typename T>
std::vector<std::vector<T>> gorbachev_sort(std::vector<T>& arr) {
    std::cout << "Perestroika initiated! Dissolving the central structure...\n";
    
    std::vector<std::vector<T>> decentralized_system;
    decentralized_system.reserve(arr.size());
    
    for (const auto& element : arr) {
        decentralized_system.push_back(std::vector<T>{ element });
    }
    
    arr.clear(); 
    
    return decentralized_system;
}