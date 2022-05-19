#include <iostream>
#include <cstdlib>

void create_array();


int main(int argc, char* argv[]){

   unsigned int count = 0; 
   const unsigned int size1 = 100;
   const unsigned int size2 = 50;
   int array100[size1];
   int array50[size2];
    // Tworzenie ziarna losowania (ziarnem będzie czas) 
    srand(time(NULL));
    //tworzymy tablice z liczbami losowymi od 1-1000 zrobiłem funkcją dla nauki
   create_array();
    //dodawanie
     for (int i = 0; i < size2; i++){
        array50[i]=array100[i]+array100[99-i];
        //std::cout << "element tablicy o indeksie: " << i <<" posiada wartosc: " << array50[i] << std::endl;
    }
     //odejmowanie
     for (int i = 0; i < size2; i++){
        array50[i]=array100[i]-array100[99-i];
        //std::cout << "element tablicy o indeksie: " << i <<" posiada wartosc: " << array50[i] << std::endl;
    }
     //mnozenie
     for (int i = 0; i < size2; i++){
        array50[i]=array100[i]*array100[99-i];
        //std::cout << "element tablicy o indeksie: " << i <<" posiada wartosc: " << array50[i] << std::endl;
    }
     //dzielenie
     for (int i = 0; i < size2; i++){
        array50[i]=array100[i]/array100[99-i];
        //std::cout << "element tablicy o indeksie: " << i <<" posiada wartosc: " << array50[i] << std::endl;
    }
    // modulo 
     for (int i = 0; i < size2; i++){
        array50[i]=array100[i]%array100[99-i];
       // std::cout << "element tablicy o indeksie: " << i <<" posiada wartosc: " << array50[i] << std::endl;
    }
}

void create_array(){

const unsigned int size = 100;
int array[size];

 for (int i = 0; i < size; i++){
        array[i] = (rand() % 1000) + 1; // liczby losowe od 1 - 1000
        std::cout << "element tablicy o indeksie: " << i <<" posiada wartosc: " << array[i] << std::endl;
    }
}
/* BEZFUNKCJI
#include <iostream>
#include <cstdlib>

void create_array();


int main(int argc, char* argv[]){

   unsigned int count = 0; 
   const unsigned int size1 = 100;
   const unsigned int size2 = 50;
   int array100[size1];
   int array50[size2];
    // Tworzenie ziarna losowania (ziarnem będzie czas) 
    srand(time(NULL));
    //tworzymy tablice z liczbami losowymi od 1-1000 zrobiłem funkcją dla nauki
   for (int i = 0; i < size1; i++){
        array100[i] = (rand() % 1000) + 1; // liczby losowe od 1 - 1000
        std::cout << "element tablicy o indeksie: " << i <<" posiada wartosc: " << array100[i] << std::endl;
    }
    //dodawanie
    //std::cout << "DODAWANIE"<< std::endl;
     for (int i = 0; i < size2; i++){
        array50[i]=array100[i]+array100[99-i];
        //std::cout << "element tablicy o indeksie: " << i <<" posiada wartosc: " << array50[i] << std::endl;
    }
     //odejmowanie
     //std::cout << "ODEJMOWANIE"<< std::endl;
     for (int i = 0; i < size2; i++){
        array50[i]=array100[i]-array100[99-i];
       // std::cout << "element tablicy o indeksie: " << i <<" posiada wartosc: " << array50[i] << std::endl;
    }
     //mnozenie
     for (int i = 0; i < size2; i++){
        array50[i]=array100[i]*array100[99-i];
        //std::cout << "element tablicy o indeksie: " << i <<" posiada wartosc: " << array50[i] << std::endl;
    }
     //dzielenie
     for (int i = 0; i < size2; i++){
        array50[i]=array100[i]/array100[99-i];
        //std::cout << "element tablicy o indeksie: " << i <<" posiada wartosc: " << array50[i] << std::endl;
    }
    // modulo 
    std::cout << "MODULO"<< std::endl;
     for (int i = 0; i < size2; i++){
        array50[i]=array100[i]%array100[99-i];
        std::cout << "element tablicy o indeksie: " << i <<" posiada wartosc: " << array50[i] << std::endl;
    }
}
*/