#pragma once
#include <vector>
#include <string>
#include <variant>
#include <iostream>
#include <thread>
#include <chrono>

using SovietData = std::variant<int, double, std::string>;

//helping func
inline void print_soviet_array(const std::vector<SovietData>& arr) {
    std::cout << "[";
    for (size_t i = 0; i < arr.size(); ++i) {
        std::visit([](const auto& arg) { std::cout << arg; }, arr[i]);
        if (i < arr.size() - 1) std::cout << ", ";
    }
    std::cout << "]\n";
}

/**
 * PUTIN SORT
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */
inline void putin_sort(std::vector<SovietData>& arr) {
    std::string party_core = "EdRo (Edinaya Rossiya))";
    size_t n = arr.size();
    
    std::cout << "Initiating vertical consolidation...\n";
    
    for (size_t i = 0; i < n; ++i) {
        arr[i] = party_core;
        
        size_t loyal_elements = 0;
        for (const auto& el : arr) {
            if (std::holds_alternative<std::string>(el) && std::get<std::string>(el) == party_core) {
                loyal_elements++;
            }
        }
        
        double rating = (static_cast<double>(loyal_elements) / n) * 100.0;
        std::cout << "Step " << (i + 1) << ": Consensus level at " << rating << "% -> ";
        print_soviet_array(arr);
        
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    std::cout << "Absolute institutional stability achieved.\n";
}