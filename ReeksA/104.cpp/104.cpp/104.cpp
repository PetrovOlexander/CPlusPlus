#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using std::string;

string genereer_string(int len);

int main(int argc, const char * argv[]) {
    srand((unsigned)time(0));
    std::cout << genereer_string(5) << std::endl;
    return 0;
}

string genereer_string(int len){
    int min = 65, max = 122;
    string result;
    if(!(len <= 0)){
        for(int i = 0; i < len; i++){
            result += rand() % (max - min) + min;
        }
        return result;
    }
    return "Lengte mag niet 0 of negatief zijn.";
    }

