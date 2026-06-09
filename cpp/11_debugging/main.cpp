#include <iostream>
#include <vector>

int main() {
    std::vector<double> rhos{5.0, 50.0, 99.0, 100.0};

    int zero_count = 0;
    int side_count = 0;

    for (double rho : rhos) {
        if (rho < 10.0) {
            zero_count++;
        } else if (rho >= 30.0 && rho < 100.0) {
            side_count++;
        }
    }

    std::cout << "zero_count = " << zero_count << "\n";
    std::cout << "side_count = " << side_count << "\n";

    return 0;
}
