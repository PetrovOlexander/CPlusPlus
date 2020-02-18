#include <iostream>
#include <string>

void test();

int main(){
	// werkt 
	char k = 'y'; 
	std::string w = ""; 
	w += k; 
	std::cout << "karakter "<< k <<" omgezet: "<< w << "." << std::endl;	
	test();
}

void test(){
	// werkt niet 
	char c = 'x';
	std::string s = "" + c;
	std::cout << "karakter "<< c <<" omgezet: "<< s << "." << std::endl;
}

