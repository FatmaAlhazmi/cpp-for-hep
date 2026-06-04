#include <iostream>

struct FourVector{
	double energy;
	double px;
	double py;
	double pz;
};

double momentum_squared(FourVector p){
	return p.px*p.px+p.py*p.py+p.pz*p.pz;
}

int main () {
	FourVector p{240,10,0,238};

	double p2=momentum_squared(p);

	std::cout<<"energy="<<p.energy
	         <<"px="<<p.px<<"\n"
	         <<"py="<<p.py<<"\n"
	         <<"pz="<<p.pz<<"\n"
	         <<"p2="<<p2<<"\n";
	return 0;
}