#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using std::string;

string genereer_string(int len);
void vul_array_met_strings(string tab[], size_t n, size_t len);
void schrijf(string tab[], size_t n);

const size_t lengte = 10;
const size_t chars = 10;

int main(int argc, const char * argv[]) {
    srand((unsigned)time(0));
    string tab[lengte];
    vul_array_met_strings(tab, lengte, chars);
    schrijf(tab, lengte);
    return 0;
}

string genereer_string(size_t len){
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

void vul_array_met_strings(string tab[], size_t n, size_t len){
    for(int i = 0; i < n; i++){
        tab[i] = genereer_string(len);
    }
}

void schrijf(string tab[], size_t n){
    for(int i = 0; i < n; i++){
        std::cout << tab[i] << std::endl;
    }
}

