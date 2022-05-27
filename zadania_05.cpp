#include <iostream>
#include <cstdlib>
#include <cstring>

namespace zadanie_0{

char* create_raw_string();
void remove_raw_string(char &argument);
}

int main(int argc, char* argv[]){

zadanie_0::create_raw_string();

}

namespace zadanie_0{

char* create_raw_string(){

char array[4096];


std::cout << "Wprowadz ciag znakow (jedna linia, bez spacji)" << std::endl;
std::cin >> array; 

int lenght = std::strlen(array);

//std::cout << "ilosc znakow w tablicy to: " << lenght << std::endl; // liczymy znaki

char* buffer = (char*)malloc(lenght);

for(int i= 0; i < lenght; i++){

    buffer[i] = array[i];

}
//std::cout <<" skopiowana tablica: " << buffer << std::endl;

return buffer;
}

void remove_raw_string(char &argument){

    argument = 
}


}
    

