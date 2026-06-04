#include <iostream>
#include <vector>

int main() {
	std::vector<double> rhos{5,50,99,100};
	std::string sample="mu240";
	std::string mode="visible";

	int zero_count=0;
	int side_count=0;

	for (double rho: rhos){
		if (rho<10){
			zero_count++;
		} else if (rho >= 30 && rho<100){
			side_count++;
		}
	}

	std::cout << "sample = " << sample << "\n"
	          << "mode = " << mode << "\n"
	          << "zero_count = " << zero_count << "\n"
	          << "side_count = " << side_count << "\n";

	         return 0;
	
}