#pragma once

struct FourVector {
    double energy;
    double px;
    double py;
    double pz;
};

double momentum_squared(FourVector p);
double invariant_mass_squared(FourVector p);
