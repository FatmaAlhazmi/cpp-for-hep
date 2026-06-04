#include <iostream>

double square(double x){
	return x*x;
}

double momentum_squared(double px, double py, double pz){
	return square(px)+square(py)+square(pz);
}

int main() {
	double energy=240;
	double px=10;
	double py=0;
	double pz=238;

	double p2=momentum_squared(px,py,pz);
	double m2=square(energy)-p2;

	std::cout<<"p2="<< p2
	         <<", m2="<<m2 <<"\n";

	return 0;
}
	
