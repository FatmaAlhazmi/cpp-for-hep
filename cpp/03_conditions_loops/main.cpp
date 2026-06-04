#include <iostream>


int main() {
    double rho= 8.5;
	if (rho <10){
		std::cout<<"zero region"<<"\n";
	} else if (rho >=30 && rho<100){
		std::cout<<"side region"<<"\n";
	}
	else{
		std::cout<<"outside selected regions"<<"\n";
	}
	return 0;
}
