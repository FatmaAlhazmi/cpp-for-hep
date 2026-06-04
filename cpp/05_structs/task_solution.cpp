#include <iostream>

struct FourVector{
	double energy;
	double px;
	double py;
	double pz;
};

double invariant_mass_squared(FourVector p){
	return p.energy*p.energy-p.px*p.px-p.py*p.py-p.pz*p.pz;
}

int main () {
	FourVector p{240,10,0,238};

	double m2=invariant_mass_squared(p);

	std::cout<<"energy="<<p.energy
	         <<"px="<<p.px<<"\n"
	         <<"py="<<p.py<<"\n"
	         <<"pz="<<p.pz<<"\n"
	         <<"m2="<<m2<<"\n";
	return 0;
}