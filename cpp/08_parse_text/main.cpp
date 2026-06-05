#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main() {
	std::ifstream input("small_examples/rhos_labeled.txt");

		if (!input) {
			std::cout<<"Could not open the file"<<"\n";
			return 1;
		}

		std::string line;
		int zero_count =0;
		int side_count=0;

		while (std::getline(input, line)) {
			std::stringstream ss(line);

			std::string label;
			double rho =0;

			ss>> label>> rho;

			if (label=="rho") {
				if (rho<10) {
					zero_count++;
				} else if (rho >= 30&& rho<100) {
					side_count++;
				}
			}
		}

		std::cout <<"zero_count =" << zero_count << "\n"
		          <<"side_count =" << side_count << "\n";

		          return 0;
}