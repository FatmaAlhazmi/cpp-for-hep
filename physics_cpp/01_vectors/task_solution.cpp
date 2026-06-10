#include <iostream>

struct Vector3 {
    double px;
    double py;
    double pz;
};

double norm_squared(Vector3 p) {
    return p.px*p.px + p.py*p.py + p.pz*p.pz;
}

double dot3(Vector3 a, Vector3 b) {
    return a.px*b.px + a.py*b.py + a.pz*b.pz;
}

int main() {
    Vector3 p{10.0, 0.0, 238.0};
    Vector3 a{1.0, 2.0, 3.0};
    Vector3 b{4.0, 5.0, 6.0};

    double p2 = norm_squared(p);
    double ab = dot3(a, b);

    std::cout << "p2 = " << p2 << "\n";
    std::cout << "dot3 = " << ab << "\n";

    return 0;
}
