#include <iostream>
#include <cstdlib>


int main(int argc, char* argv[]){

int liczba;
const unsigned int size = 31;
int array[size];

std::cout << " podaj liczbe ktora chcesz zamieni na binarna: " << std::endl;
std::cin >> liczba;
//std::cout << "podana liczba : " << liczba << std::endl;
//zerujemy naszą tablicę tak sie podobno robi :P
for (int i=0; i < size; i++){
    array[i] = 0;

//std::cout << "element tablicy o indeksie: " << i <<" posiada wartosc: " << array[i] << std::endl;
}
for (int i= size; i > -1; i--){
    if( liczba % 2 == 0){

        array[i] = 0;
        liczba = liczba / 2;

    }else if  (liczba % 2 == 1){
    
        array[i] = 1;
        liczba = liczba / 2;
    }else if (liczba / 2 == 0){
     break;
    }
    
std::cout  << array[i] << std::endl;

}
}
