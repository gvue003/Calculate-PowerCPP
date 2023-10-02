//Calculate Power: Implement a function to calculate the power of a number (e.g., 2^3 = 8)

#include <iostream>

long power(int x, unsigned n) {
    long long pow = 1;
    for (int i = 0; i < n; i++) {
        pow = pow * x;
    }
    return pow;
}

int main() {
    int x = 2;
    unsigned n = 3;
    int result = power(x, n);
    std::cout << "result of " << x << " raised the power of " << n << " is: " << result << std::endl;
    return 0;
}
