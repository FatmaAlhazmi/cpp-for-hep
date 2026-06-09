#include <iostream>
#include "four_vector.hpp"

int main() {
    FourVector p{240.0, 10.0, 0.0, 238.0};

    double p2 = momentum_squared(p);
    double m2 = invariant_mass_squared(p);

    std::cout << "p2 = " << p2 << "\n";
    std::cout << "m2 = " << m2 << "\n";

    return 0;
}
