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
namespace zadanie_5{

int foo(int a, int b);
int abc(int a, int b);
void show_me_the_money();
void execute();

}

int main(int argc, char* argv[]){

//zadanie_3::execute();
//zadanie_4::initialization();
//zadanie_4::execute();
//zadanie_4::finalization();
zadanie_5::execute();


 
     

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
        *(data_ptr + i)= 0 ;

        *(data_ptr + i)=(rand() % 8092) ;
         std::cout << "wyswietlam tablice " << "element " << i << " wynosi: " <<  *(data_ptr + i) << std::endl << std::endl;
    
    }
    memcpy(data_copy_ptr, data_ptr, data_size*sizeof(int) );

    for(int i=0; i < data_size; i++){

        //*(data_copy_ptr + i)=*(data_copy_ptr + i) + 255;
         std::cout << "wyswietlam tablice copy + 255  " << "element " << i << " wynosi: " <<  *(data_copy_ptr + i) + 255 << std::endl << std::endl;
    
    }
    //czyszczecie tablicy bo co?? tam zawiera po alokacji
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

        std::cout << "wyswietlam tablice  oblicze??  " << "element " << i << " wynosi: " <<  *(calculations_ptr + i) << std::endl << std::endl;
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
  

    std::cout << "wynik 1 funkcji wykonanej za pomoca wskaznika to: " << result_1 << " wynik 2 funkcji wykonanej za pomoca wskaznika to: " << result_2 << std::endl;
    
    
    

}

}

to masz co?? takiego
Rafa?? Andrusieczko16:21
int foo(int a, int b) {return a+ b;}
int abc(int a, int b) {return a*b;}
(edytowano)
Rafa?? Andrusieczko16:21
czyli jeste?? wstanie utworzy?? funkcj??
Rafa?? Andrusieczko16:21
kt??re realizuj?? r????ne funkcjonalno??ci
Rafa?? Andrusieczko16:21
no i te?? jeste?? wstanie przypisa?? funkcj?? do zmiennej
Rafa?? Andrusieczko16:21
bo nie wiesz czy chcesz wywo??a?? foo czy abc
Rafa?? Andrusieczko16:22
mo??esz przypisa?? j?? do zmiennej
Rafa?? Andrusieczko16:22
czyli
Rafa?? Andrusieczko16:22
aby utworzy?? wska??nik na funkcj??
Rafa?? Andrusieczko16:22
musisz skupi?? si?? tylko na tym fragmencie int abc(int a, int b)
Rafa?? Andrusieczko16:22
czyli wiemy jaki wynik zw??rci nam funkcja
Rafa?? Andrusieczko16:22
jest to liczba ca??kowita
Rafa?? Andrusieczko16:23
wiemy jakie argumenty przyjmuje funkcja
Rafa?? Andrusieczko16:23
s?? to 2 liczby ca??kowite
Rafa?? Andrusieczko16:23
wi??c jeste??my wstanie utworzy?? wska??nik na t?? funkcj??
Rafa?? Andrusieczko16:23
int (ptr*)(int, int); (edytowano)
Rafa?? Andrusieczko16:23
ptr - to nazwa zmiennej
Rafa?? Andrusieczko16:23
i teraz
Rafa?? Andrusieczko16:24
mo??esz przypisa?? dobrowoln?? funkcj?? pod ptr
Rafa?? Andrusieczko16:24
czy to b??dzie abc (edytowano)
Rafa?? Andrusieczko16:24
czy to b??dzie foo
Rafa?? Andrusieczko16:24
ptr = &abc;
ptr = &foo;
Rafa?? Andrusieczko16:24
wa??ne jest znowu &
Rafa?? Andrusieczko16:24
bo dzi??ki temu operatorowi, jeste??my wstanie wy??uska?? adres
Rafa?? Andrusieczko16:25
no i teraz naj??atwiejsze
Rafa?? Andrusieczko16:25
kiedy chcemy wo??a?? funkcj??
Rafa?? Andrusieczko16:25
to wystarczy u??y?? wska??nika, tak samo jak wywo??ujemy funkcj??
Rafa?? Andrusieczko16:25
int result = ptr(5, 1);
Rafa?? Andrusieczko16:25
i teraz zale??y co przypisa??e?? do zmiennej
Rafa?? Andrusieczko16:26
to ta funkcja si?? wykona
Rafa?? Andrusieczko16:26
i czemu to jest wa??ne
Rafa?? Andrusieczko16:26
cz??sto jest tak, ??e chcieliby??my wywo??a?? funkcj??
Rafa?? Andrusieczko16:26
w innej funkcji
Rafa?? Andrusieczko16:27
tak aby wykona?? jakie?? okre??lone zadanie
Rafa?? Andrusieczko16:27
wysy??amy request do serwera, i wiemy jaki to jest request
Rafa?? Andrusieczko16:27
wi??c przypisujemy funkcj?? kt??ra ma zosta?? wys??ana
Rafa?? Andrusieczko16:27
albo z??y przyk??ad bo skomplikowany
Rafa?? Andrusieczko16:28
poczytaj o c++ callback
Rafa?? Andrusieczko16:28
tam b??dzie jak u??ywa?? wska??nik??w na funkcj??

