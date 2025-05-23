#include <iostream>

#include "sum.h"
#include "sub.h"
#include "div.h"
#include "multiply.h"

using std::cout;

int main() {

    std::cout << "sum(1, 5) = " << sum(1, 5) << '\n';
    std::cout << "sub(5, 1) = " << sub(5, 1) << '\n';
    std::cout << "div(9, 3) = " << divide(9, 3) << '\n';
    std::cout << "mul(2,2) = " << multiply(2,2) << '\n';
    return 0;
}
