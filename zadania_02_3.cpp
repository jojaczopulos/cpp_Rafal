#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]){

    const unsigned int size = 1024;
    char array[size];
    int counter = 0;

   std::cout << " wpisz cos drogi uzytkowniku: ";
   std::cin >> array;
   std::cout << " wpisany ciag znakow to: " << array << std::endl;

   for (unsigned int i = 0; i < size; i++) {
      if(array[i] != '\0' ){
         counter = counter + 1;
      }else{
          break;
      } 
    }

    std::cout << " ilosc znakow w ciagu znakow to: " << counter ;




}

 
