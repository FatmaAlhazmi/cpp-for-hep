#include <iostream>

struct FourVector {
    double energy;
    double px;
    double py;
    double pz;
};

double lorentz_dot(FourVector a, FourVector b) {
    return a.energy*b.energy - a.px*b.px - a.py*b.py - a.pz*b.pz;
}

int main() {
    FourVector a{240.0, 10.0, 0.0, 238.0};
    FourVector b{20.0, 1.0, 2.0, 19.0};

    double ab = lorentz_dot(a, b);

    std::cout << "a_dot_b = " << ab << "\n";

    return 0;
}
