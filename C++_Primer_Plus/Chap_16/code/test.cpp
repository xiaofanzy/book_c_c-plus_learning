#include <iostream>
#include <ranges>
#include <vector>
 
int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    for (int n : v) {
        std::cout << n << ' ';
    }
    std::cout << '\n';
 
    auto is_odd = [](int n) { return n % 2 != 0; };
    auto odd_numbers = v | std::ranges::views::filter(is_odd);
    for (int n : odd_numbers) {
        std::cout << n << ' ';
    }
    std::cout << '\n';
 
    return 0;
}