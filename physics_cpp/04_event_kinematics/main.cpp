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

FourVector add_four_vectors(FourVector a, FourVector b) {
    FourVector sum;
    sum.energy = a.energy + b.energy;
    sum.px = a.px + b.px;
    sum.py = a.py + b.py;
    sum.pz = a.pz + b.pz;
    return sum;
}

double mass_squared(FourVector p) {
    return lorentz_dot(p, p);
}

double photon_x(double Egamma, double sqrts) {
    return 2.0*Egamma/sqrts;
}

int main() {
    double sqrts = 240.0;
    double Egamma = 20.0;

    double xg = photon_x(Egamma, sqrts);

    std::cout << "xg = " << xg << "\n";

    return 0;
}
