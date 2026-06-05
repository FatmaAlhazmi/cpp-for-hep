#include <iostream>
#include <fstream>

int main() {
	std::ifstream input("small_examples/rhos.txt");

	if (!input) {
		std::cout<<"Could not open input file"<<"\n";
		return 1;
	}

	double rho=0;
	int zero_count=0;
	int side_count=0;

	while (input>>rho) {
		if (rho <10) {
			zero_count++;
		} else if (rho >= 30 && rho<100) {
			side_count++;
		}
	}

	std::cout<<"zero_count ="<< zero_count 
	         <<"side_count +"<< side_count << "\n";

	         return 0;
}