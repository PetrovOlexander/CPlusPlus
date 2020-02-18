#include <iostream>
#include <iomanip>

int main(){
	for(int i = 0; i <= 64; i++){
		std::cout << std::oct << i 
		<< "\t" << std::dec << i 
		<< "\t" << std::hex << i 
		<< "\n";
	}
}
