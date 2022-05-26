#include <iostream>
#include <cstdlib>  // std::srand(), std::rand()
#include <ctime>    // std::time()

namespace zadanie_0{

void execute();
  
}
namespace zadanie_1{

void execute();
  
}
namespace zadanie_2{

void execute();
  
}

int main(int argc, char* argv[]){

//zadanie_0::execute();
//zadanie_1::execute();
zadanie_2::execute();

}

namespace zadanie_0{

void execute(){
srand(1234);
const int size= 10;
unsigned int array[size];
unsigned int *wsk;


  for(int i = 0; i < size; i++){
    array[i]= (rand() % 1024); 
    std::cout << "indeks : " << i << " wartosc w tablicy: " << array[i] << std::endl;
  }
wsk = array;
//wsk = &array[0];
wsk = &array[4];

std::cout << " wyswietlam tylko element 5 tablicy:  " << *wsk << " to jest jego wartosc " << std::endl;

wsk = &array[0];
  for(int i; i < size; i++ ){
    std::cout << "Index: " << i << " Adres: " << wsk << " Wartosc: " << *(wsk + i) << std::endl;

  }

}
}
namespace zadanie_1{

void execute(){
srand(1234);

unsigned int *wsk;
unsigned int size;

  std::cout << "ile elementow ma miec tablica? " << std::endl;
  std::cin >> size;

wsk = new unsigned int[size];



  for(int i = 0; i < size; i++){
    wsk[i]= (rand() % 1024); 
    
    std::cout << "indeks : " << i << " wartosc w tablicy: " << wsk[i] << std::endl;
  }
  std::cout << " wyswietlam tylko element 5 tablicy:  " << *(wsk + 4 ) << " to jest jego wartosc " << std::endl;


  for(int i; i < size; i++ ){
    std::cout << "Index: " << i << " Adres: " << wsk << " Wartosc: " << *(wsk + i) << std::endl;

  }

delete [] wsk;
//std::cout << " wyswietlam tylko element 5 tablicy:  " << *(wsk + 4 ) << " to jest jego wartosc " << std::endl;
}
}
namespace zadanie_2{

void execute(){

  float array[] = {1.1f, 0.5f, 1.8f, 9.9f, 124.1f, 6.0f, 7.0f, 12.1f, 12.1f, 9.0f, 4.4f};

  int s1, s2;
  s1 = sizeof(array); // 44
  s2 = sizeof(float); // 4
  int length;
  length = s1/s2 ; 

  std::cout << "rozmiar tablicy: " << s1 << " rozmiar float'a: " << s2 << "  rozmiar tablicy float'ow wynosi: " << length <<std::endl;
 

}
  
}
