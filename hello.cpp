#include <iostream>

int main() {
    std::cout << "========== 九九乘法表(C++版本) ==========" << std::endl;
    
    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << j << "×" << i << "=" << i*j << "\t";
        }
        std::cout << std::endl;
    }
    
    return 0;
}