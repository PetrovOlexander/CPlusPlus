#include <iostream>
#include <iomanip>

int main(){
	for(int i = 0; i <= 64; i++){
		std::setw(60);
		std::cout << 
		std::setw(6) << std::oct << i << 
		std::setw(6) << std::dec << i << 
		std::setw(6) << std::hex << i <<
		std::endl;
	}
}
