#include <iostream>

struct FourVector {
    double energy;
    double px;
    double py;
    double pz;
};

double energy_squared(FourVector p) {
    return p.energy*p.energy;
}

double momentum_squared(FourVector p) {
    return p.px*p.px + p.py*p.py + p.pz*p.pz;
}

double invariant_mass_squared(FourVector p) {
    return p.energy*p.energy - p.px*p.px - p.py*p.py - p.pz*p.pz;
}

int main() {
    FourVector p{240.0, 10.0, 0.0, 238.0};

    double E2 = energy_squared(p);
    double p2 = momentum_squared(p);
    double m2 = invariant_mass_squared(p);

    std::cout << "E2 = " << E2 << "\n";
    std::cout << "p2 = " << p2 << "\n";
    std::cout << "m2 = " << m2 << "\n";

    return 0;
}
