#include <iostream>

int main() {
	double energy=240;
	double px=10;
	double py = 0;
	double pz= 238;
	int charge = -1;
	double p2 = px*px+py*py + pz*pz;
	double m2=energy*energy - p2;
	const double sqrts = 240;
	double s =sqrts*sqrts;
	
	std::cout << "energy="<<energy<< "\n";
	std::cout << "px="<<px<< "\n";
	std::cout << "py="<<py<< "\n";
	std::cout << "pz="<<pz<< "\n";
	std::cout << "charge="<<charge<< "\n";
	std::cout << "p2="<<p2<< "\n";
	std::cout << "s="<<s<< "\n";
	std::cout << "m2="<<m2<< "\n";
	return 0;
}
