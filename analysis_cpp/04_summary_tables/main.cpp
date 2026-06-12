#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ifstream input("small_examples/rhos.txt");

    if (!input) {
        std::cout << "Could not open input file\n";
        return 1;
    }

    std::string sample = "toy";

    int events = 0;
    int zero = 0;
    int side = 0;

    double rho = 0.0;

    while (input >> rho) {
        events++;

        if (rho < 10.0) {
            zero++;
        } else if (rho >= 30.0 && rho < 100.0) {
            side++;
        }
    }

    double Rzero = 0.0;

    if (side > 0) {
        Rzero = static_cast<double>(zero) / side;
    }

    std::ofstream output("outputs/summary.txt");

    if (!output) {
        std::cout << "Could not open output file\n";
        return 1;
    }

    output << "sample events zero side Rzero\n";
    output << sample << " " << events << " " << zero << " " << side << " " << Rzero << "\n";

    return 0;
}
