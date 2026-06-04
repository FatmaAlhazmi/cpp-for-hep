#include <iostream>

double square(double x){
	return x*x;
}

double invariant_mass_squared(double energy, double px, double py, double pz){
	return square(energy)-square(px)-square(py)-square(pz);
}

int main() {
	double energy=240;
	double px=10;
	double py=0;
	double pz=238;

	double m2=invariant_mass_squared(energy,px,py,pz);

	std::cout<<", m2="<<m2 <<"\n";

	return 0;
}
	
