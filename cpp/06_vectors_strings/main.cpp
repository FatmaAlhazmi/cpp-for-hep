#include <iostream>
#include <vector>

int main() {
	std::vector<double> rhos;

	rhos.push_back(5);
	rhos.push_back(50);
	rhos.push_back(99);
	rhos.push_back(100);

	int zero_count=0;
	int side_count=0;

	for (double rho: rhos){
		if (rho<10){
			zero_count++;
		} else if (rho >= 30 && rho<100){
			side_count++;
		}
	}

	std::cout << "zero_count = " << zero_count << "\n"
	          << "side_count = " << side_count << "\n";

	         return 0;	
}