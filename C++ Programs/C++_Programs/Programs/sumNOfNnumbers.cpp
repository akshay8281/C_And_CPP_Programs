#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    if (n < 1) {
        std::cout << "Invalid input. Please enter a positive integer." << std::endl;
        return 1;
    }

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int num;
        std::cout << "Enter number " << i << ": ";
        std::cin >> num;
        sum += num;
    }

    std::cout << "The sum of " << n << " numbers is: " << sum << std::endl;

    return 0;
}
