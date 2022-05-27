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
namespace zadanie_5{

int foo(int a, int b);
int abc(int a, int b);
void show_me_the_money();
void execute();

}

int main(int argc, char* argv[]){

//zadanie_0::execute();
//zadanie_1::execute();
//zadanie_2::execute();
//zadanie_3::execute();
//zadanie_4::initialization();
//zadanie_4::execute();
//zadanie_4::finalization();
//zadanie_5::execute();


}

namespace zadanie_0{

void execute(){
srand(1234);
const int size= 10;
unsigned int array[size];
unsigned int *wsk = nullptr;


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

unsigned int *wsk = nullptr;
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
namespace zadanie_3{

void execute(){
    srand(1234);
    int size1 = 10;
    int size2 = size1/2;

    unsigned int *wsk = nullptr;
    unsigned int *wsk2 = nullptr;

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
        *(data_ptr + i)= 0 ;

        *(data_ptr + i)=(rand() % 8092) ;
         std::cout << "wyswietlam tablice " << "element " << i << " wynosi: " <<  *(data_ptr + i) << std::endl << std::endl;
    
    }
    memcpy(data_copy_ptr, data_ptr, data_size*sizeof(int) );

    for(int i=0; i < data_size; i++){

        //*(data_copy_ptr + i)=*(data_copy_ptr + i) + 255;
         std::cout << "wyswietlam tablice copy + 255  " << "element " << i << " wynosi: " <<  *(data_copy_ptr + i) + 255 << std::endl << std::endl;
    
    }
    //czyszczecie tablicy bo coś tam zawiera po alokacji
    for(int i=0; i < calculations_size; i++){

        *(calculations_ptr + i) = 0;

    }

    

     for(int i=0; i < data_size; i++){

          if ( i % 3 == 0 ){ // 0 3 6 9

        *(calculations_ptr + 0) = *(calculations_ptr + 0) + *(data_copy_ptr + i);
          }
           if ( i % 3 == 1 ){ // 1 4 7 10

        *(calculations_ptr + 1) = *(calculations_ptr + 1) + *(data_copy_ptr + i);
          }
           if ( i % 3 == 2 ){ // 2 5 8 11

        *(calculations_ptr + 2) = *(calculations_ptr + 2) + *(data_copy_ptr + i);
          }



        // std::cout << "wyswietlam tablice  oryginalna  " << "element " << i << " wynosi: " <<  *(data_ptr + i) << std::endl << std::endl;
    
    } 
     for(int i=0; i < calculations_size; i++){

        std::cout << "wyswietlam tablice  obliczeń  " << "element " << i << " wynosi: " <<  *(calculations_ptr + i) << std::endl << std::endl;
    }
}

void finalization(){

    delete [] data_ptr ;
    delete [] data_copy_ptr ;
    delete [] calculations_ptr ;
}

}
namespace zadanie_5{

int foo(int a, int b){
   // std::cout << __FUNCSIG__ << std::endl;
    return a+b;

}
int abc(int a, int b){
    return a*b;

}
void show_me_the_money(){

    std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
}
void execute(){

   
    int (*ptr_1)(int, int);

    int (*ptr_2)(int, int);

    void (*ptr_3)();


    ptr_1 = &abc;
    ptr_2 = &foo;
    ptr_3 = &show_me_the_money;


    int result_1 = ptr_1(5, 5);
    int result_2 = ptr_2(5, 5);
  

    std::cout << "wynik 1 funkcji wykonanej za pomoca wskaznika to: " << result_1 << " wynik 2 funkcji wykonanej za pomoca wskaznika to: " << result_2 << std::endl << std::endl;

    ptr_3();
    
    





}

}
