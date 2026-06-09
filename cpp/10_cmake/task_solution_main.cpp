#include <iostream>
#include "task_solution_four_vector.hpp"

int main() {
    FourVector a{240.0, 10.0, 0.0, 238.0};
    FourVector b{20.0, 1.0, 2.0, 19.0};

    double ab = dot(a, b);

    std::cout << "dot = " << ab << "\n";

    return 0;
}
