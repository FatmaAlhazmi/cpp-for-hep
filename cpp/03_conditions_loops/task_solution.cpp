#include <iostream>


int main() {
    double rho1= 5;
    double rho2= 50;
    double rho3= 99;
    double rho4= 100;

    int zero_count=0;
    int side_count=0;
    
	if (rho1 <10){
		zero_count=zero_count+1;
	} else if (rho1 >=30 && rho1<100){
		side_count=side_count+1;
	}

	if (rho2 <10){
			zero_count=zero_count+1;
		} else if (rho2 >=30 && rho2<100){
			side_count=side_count+1;
		}

	if (rho3 <10){
			zero_count=zero_count+1;
		} else if (rho3 >=30 && rho3<100){
			side_count=side_count+1;
		}

	if (rho4 <10){
			zero_count=zero_count+1;
		} else if (rho4 >=30 && rho4<100){
			side_count=side_count+1;
		}

	std::cout << "zero_count = " << zero_count
	          << ", side_count = " << side_count << "\n";
	
	return 0;
}
