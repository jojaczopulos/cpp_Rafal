#include <iostream>

// utworzenie przestrzeni nazw, a w niej same deklaracje
namespace zadanie_0 {
   
    void display(int a, int b);

    int time_converter(int a);
}
namespace zadanie_1 {
   
    void display2(int a, bool b);

    bool isLeapYear(int a);
}

int main(int argc, char * argv[])
{

    // wywołanie funkcji z przestrzeni nazw
   //zadanie_0::display(5,time_converter(5));
   zadanie_0::display(5,zadanie_0::time_converter(5));
   zadanie_0::display(11,zadanie_0::time_converter(11));
   zadanie_0::display(14,zadanie_0::time_converter(14));
    
    zadanie_1::display2(1998,zadanie_1::isLeapYear(1998));
    zadanie_1::display2(2000,zadanie_1::isLeapYear(2000));

}

// utworzenie przestrzeni nazw, a w niej same definicje
namespace zadanie_0 {
    void display(int a, int b)
    {
        std::cout << a <<" minut to " << b <<" sekund" << std::endl;
    }

    int time_converter(int a)
    {

        int b;
        b= a*60;
        return b;
    }
}
namespace zadanie_1 {
    void display2(int a, bool b)
    {
        if( b == true){
        std::cout << a <<"  jest rokiem przestepnym " << std::endl;
        }else{
            std::cout << a <<"  nie jest rokiem przestepnym " << std::endl;
        }
        
    }

    bool isLeapYear(int a)
    {
        if(a == 2000){
        return true;
        }else{
        return false;
        }
    }
}
