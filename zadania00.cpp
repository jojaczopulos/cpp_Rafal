#include <iostream>
float addition( float x, float y );
float substraction( float x, float y );
float multiplication( float x, float y );
float division( float x, float y); 
int modulo( int x, int y );
void wyswietl();
float funkcja_PPS( float r, float l );



int main(int argc, char* argv[]){

wyswietl();


std::cout << "Pole powierzchni stożka : " << funkcja_PPS( 5.0f, 5.0f) << std::endl;



}

void wyswietl(){

std::cout << "1. Dodawanie wynik - " << addition(1.0f, 2.0f) << std::endl;
std::cout << "2. Odejmowanie wynik - " << substraction(5.0f, 2.0f) << std::endl;
std::cout << "3. Mnozenie wynik - " << multiplication(2.0f, 2.0f) << std::endl;
std::cout << "4. Dzielenie wynik -  " << division(3.0f, 2.0f) << std::endl;
std::cout << "5. Dzielenie z reszta wynik - " << modulo(5, 2) << std::endl;


}

float funkcja_PPS( float r, float l ){

    float pi = 3.14;
    float pc;

    pc = ( ( pi * r)*( pi * r) ) + (pi*r*l ); 

    return pc;
}

float addition( float x, float y){
float z;

z= x+y;

    return z;
}
float substraction( float x, float y){
float z;

z= x-y;

    return z;
}
float multiplication( float x, float y){
float z;

z= x*y;

    return z;
}
float division( float x, float y){
float z;

z= x/y;

    return z;
}
int modulo( int x, int y){
int z;

z= x%y;

    return z;
}





