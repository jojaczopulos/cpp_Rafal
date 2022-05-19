#include <iostream>
#include <cstdlib>  // std::srand(), std::rand()
#include <ctime>    // std::time()





int main(int argc, char* argv[]){

const unsigned int size = 1000;
int array[size];
int sum = 0;
unsigned int count = 0;
int min;
int max;


srand(2137); // ziarno

for( int i = 0; i < size; i++){
  if(i%3 == 0){
    array[i]=rand();
  }else{
    array[i] = -1;
  }
   //std::cout << "element tablicy o indeksie: " << i <<" posiada wartosc: " << array[i] << std::endl;
}  
  // suma elementów
for( int i = 0; i < size; i++){
  sum = sum + array[i];
}
std::cout << "suma wszystkich elementow tablicy: " << sum  << std::endl;
  // count
for( int i = 0; i < size; i++){
  if( (array[i]>= 6776) && (array[i] <= 10101) )
  count = count + 1;
}
std::cout << "liczb z przedziału jest: " << count  << std::endl;
  // min
min = array[0];
for( int i = 0; i < size; i++){
  if(  (min > array[i] ) && (array[i] > -1 ) ){
    min = array[i];
}
}
std::cout << "min: " << min  << std::endl;
//max
max = array[0];
for( int i = 0; i < size; i++){
  if( max < array[i]  ){
    max = array[i];
}

}
std::cout << "max: " << max  << std::endl;
}

