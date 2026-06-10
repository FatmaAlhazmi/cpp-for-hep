#include <iostream>

struct Vector3 {
    double px;
    double py;
    double pz;
};

double norm_squared(Vector3 p) {
    return p.px*p.px + p.py*p.py + p.pz*p.pz;
}

int main() {
    Vector3 p{10.0, 0.0, 238.0};

    double p2 = norm_squared(p);

    std::cout << "p2 = " << p2 << "\n";

    return 0;
}
