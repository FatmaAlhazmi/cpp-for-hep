#include <LHAPDF/LHAPDF.h>

#include <iostream>
#include <string>

int main() {
    std::string set_name = "CT14lo";

    LHAPDF::PDF* pdf = LHAPDF::mkPDF(set_name, 0);

    double x = 0.1;
    double Q = 100.0;

    double gluon = pdf->xfxQ(21, x, Q);
    double up = pdf->xfxQ(2, x, Q);

    std::cout << "pdf = " << set_name << "\n";
    std::cout << "x = " << x << "\n";
    std::cout << "Q = " << Q << "\n";
    std::cout << "xg = " << gluon << "\n";
    std::cout << "xu = " << up << "\n";

    delete pdf;

    return 0;
}
