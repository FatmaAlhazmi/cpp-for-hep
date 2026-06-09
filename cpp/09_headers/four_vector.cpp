#include "four_vector.hpp"

double momentum_squared(FourVector p) {
    return p.px*p.px + p.py*p.py + p.pz*p.pz;
}

double invariant_mass_squared(FourVector p) {
    return p.energy*p.energy - p.px*p.px - p.py*p.py - p.pz*p.pz;
}
