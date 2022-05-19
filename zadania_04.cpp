#include <iostream>
#include <cstdlib>

namespace zadanie_0{

void execute();

}
namespace zadanie_1{

void execute();

}
namespace zadanie_2{

void execute();

}
namespace zadanie_3{

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
    const int size = 10;
    unsigned int array[size];
    unsigned int *w = array;
  
   

    for(int i=0; i < size; i++){
        array[i]=(rand() % 1024) ;
         std::cout << "wyswietlam tablice " << array[i] << std::endl << std::endl;
    }
    std::cout << "wyswietlam tylko 5 element za pomoca wskaznika " << w[4]<< std::endl << std::endl; 

     for(int i=0; i < size; i++){
         std::cout << "index: "<< i <<  " adres: "<< w << " wartosc  " << *(w + i) << std::endl;
         
    }
}
}
namespace zadanie_1{

void execute(){
    srand(1234);

    int size;
    int *array;
    array = new int [size];

    //unsigned int array[size];
    //unsigned int *w = array;
    std::cout << "ile liczb w tablicy chcesz umiescic? " << std::endl;
    std::cin >> size;
   


    for(int i=0; i < size; i++){
        array[i]=(rand() % 1024) ;

         std::cout << "wyswietlam tablice " << array[i] << std::endl;
    }
   //std::cout << "wyswietlam tylko 5 element za pomoca wskaznika " << w[4]<< std::endl << std::endl; 

     //for(int i=0; i < size; i++){
       //  std::cout << "index: "<< i <<  " adres: "<< w << " wartosc  " << *(w + i) << std::endl;
     delete [] array;     
    }
   
}
namespace zadanie_2{

void execute(){
    float array[] ={1.1f, 0.5f, 1.8f, 9.9f, 124.1f, 6.0f, 7.0f, 12.1f, 12.1f, 9.0f, 4.4f};
    int s1 = sizeof(array); //44
    int s2 = sizeof(float); //4
    int length;
    int len = sizeof(array) / sizeof(array[0]);

    length = s1 / s2 ;
    
    std::cout << "rozmiar tablicy: " << s1 << " rozmiar float'a: " << s2 << "  rozmiar tablicy float'ow wynosi: " << length << " liczone inna metoda: "<< len << std::endl;
    

}

}
namespace zadanie_3{

void execute(){
     srand(1234);
     const unsigned int size = 10;
     unsigned int size_c = size * 4;
     unsigned int size_c2 = (size *4) / 2 ;
     unsigned int *w = &size_c;  // przypisz alokację pamięci do tego wskaźnika
     unsigned int *w2= &size_c2; // przypisz alokację pamięci do tego wskaźnika

    unsigned int array[size]; 






}

}
