#include <iostream>
#include <cstdlib>
#include <cstring>

namespace zadanie_0{

char* create_raw_string();
void remove_raw_string(char &argument);
}

int main(int argc, char* argv[]){

zadanie_0::create_raw_string();
zadanie_0::remove_raw_string(zadanie_0::create_raw_string());
  //zadanie_0::display(14,zadanie_0::time_converter(14));

}

namespace zadanie_0{

char* create_raw_string(){

char array[4096];


std::cout << "Wprowadz ciag znakow (jedna linia, bez spacji)" << std::endl;
std::cin >> array; 

int lenght = std::strlen(array);

std::cout << "ilosc znakow w tablicy to: " << lenght << std::endl; // liczymy znaki
std::cout << "rozmiar tablicy array to: " << sizeof(array)<< std::endl;

char* buffer = (char*)malloc(lenght);

for(int i= 0; i < lenght; i++){

    buffer[i] = array[i];
    /*if (array[i] == NULL) {
      break;
    }*/

}
//std::cout <<" skopiowana tablica: " << buffer << std::endl;
std::cout << "rozmiar tablicy buffer to: " << sizeof(buffer)<< std::endl;
return buffer;
//free (buffer) ;

}

void remove_raw_string(char &argument){

   char *clear = &argument;s
   free (clear);

}


}
    

