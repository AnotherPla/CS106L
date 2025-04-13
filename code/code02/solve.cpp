#include <utility>
#include <cmath>
#include <iostream>

// Function to solve a quadratic equatio
using values = std::pair<double,double>;
using Solution = std::pair<bool, values>;
Solution solveQuadratic(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        return {false, {0, 0}}; 
    }
    double root1 = (-b + std::sqrt(discriminant)) / (2 * a);
    double root2 = (-b - std::sqrt(discriminant)) / (2 * a);
    return {true, {root1, root2}};
}

int main() {
    double a, b, c;
    std::cout << "Enter coefficients a, b, and c: ";
    std::cin >> a >> b >> c;
    auto res = solveQuadratic(a, b, c);
    if (res.first) {
        std::cout << "Roots are: " << res.second.first << " and " << res.second.second << std::endl; 
    }else{
        std::cout << "No real roots" << std::endl;
    }
}