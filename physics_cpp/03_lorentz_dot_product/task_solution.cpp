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
    FourVector p{240.0, 10.0, 0.0, 238.0};

    double pp = lorentz_dot(p, p);

    std::cout << "p_dot_p = " << pp << "\n";

    return 0;
}
