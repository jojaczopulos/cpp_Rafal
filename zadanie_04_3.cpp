#include <iostream>
#include <cstdlib>

namespace zadanie_3{

void execute();

}
namespace zadanie_4{

int data_size;
unsigned int *data_ptr;
unsigned int *data_copy_ptr;
int calculations_size;
unsigned int *calculations_ptr;

void initialization();
void execute();
void finalization();
}
int main(int argc, char* argv[]){

//zadanie_3::execute();
zadanie_4::initialization();
zadanie_4::execute();

     

}
namespace zadanie_3{

void execute(){
    srand(1234);
    int size1 = 10;
    int size2 = size1/2;
    unsigned int *wsk;
    unsigned int *wsk2;
    wsk = new unsigned int[size1];
    wsk2 = new unsigned int[size2];

    for(int i=0; i < size1; i++){
        *(wsk + i)=(rand() % 1024) ;
         std::cout << "wyswietlam tablice " <<  *(wsk + i) << std::endl << std::endl;
    }
        std::cout << *wsk << std::endl << std::endl;
        std::cout << *wsk2 << std::endl << std::endl;
        wsk2[0] = 0;
        std::cout << *wsk2 << std::endl << std::endl;

  


      for(int i=0; i < size2; i++){
          *(wsk2 + i) = wsk[i] + wsk[(size1 -1)-i];
        //*(wsk2 + i)=( *(wsk + i) + (*(wsk + (size1-i) ) ) );
        //wsk++;
         //std::cout << "wyswietlam tablice 2 " << *(wsk2+ i) << std::endl << std::endl;
         std::cout << "wyswietlam tablice 2 " << "element " << i << " wynosi: " << wsk2[i] << std::endl << std::endl;
         
    }
    delete[] wsk ;
    delete[] wsk2 ;
}

}
namespace zadanie_4{
#include <iostream>

void initialization(){
    srand(2137);
    data_size = 250;
    calculations_size = 3;
    data_ptr = new unsigned int[data_size]; 
    data_copy_ptr = new unsigned int[data_size];
    calculations_ptr = new unsigned int[calculations_size];

}
void execute(){
       for(int i=0; i < data_size; i++){
        *(data_ptr + i)=(rand() % 8092) ;
         std::cout << "wyswietlam tablice " << "element " << i << " wynosi: " <<  *(data_ptr + i) << std::endl << std::endl;
    
    }
    memcpy(data_copy_ptr, data_ptr, data_size*sizeof(int) );

    for(int i=0; i < data_size; i++){
        *(data_copy_ptr + i)=*(data_copy_ptr + i) + 255;
         std::cout << "wyswietlam tablice copy + 255  " << "element " << i << " wynosi: " <<  *(data_copy_ptr + i) << std::endl << std::endl;
    
    }
}
void finalization(){

}

}


    