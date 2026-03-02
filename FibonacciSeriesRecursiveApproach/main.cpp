/* Recursive Approach (Cleanest Code)

This method calls the function within itself. 
While it looks elegant, it is much slower for large numbers 
because it recalculates the same values multiple times ($O(2^n)$ complexity).
 */

 #include <iostream>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    std::cout << "Enter terms: ";
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        std::cout << fibonacci(i) << " ";
    }
    return 0;
}