#include <iostream>

// utworzenie przestrzeni nazw, a w niej same deklaracje
namespace zadanie_0 {
   
    void display(int a, int b, int c);

}
namespace zadanie_2 {

    int convert(int sec, int frequency);
}
namespace zadanie_3 {

    void display(int a,int b);
    int calculate(int number );
}
namespace zadanie_3 {

    void display(int a,int b);
    int calculate(int number );
}
namespace zadanie_4 {

    void display(int a,int b);
    int calculate(int polygon );
}
namespace zadanie_5 {

    void display(int a);
    int calculate(int bucket_2, int bucket_3 );
}
namespace zadanie_6 {

    void display(int a, int b);
    int calculate(int year );
}
namespace zadanie_8 {

    void display(int a, int b,  int c, bool d);
    bool evaluate(int people, int pieces, int total_number_of_pieces);
}
namespace zadanie_9 {

    void display(int h, int m, int s, int winner);
    int evaluate(int h, int m, int s);
}
int main(int argc, char * argv[])
{
    //zadanie_0::display(5,time_converter(5));
    // wywołanie funkcji z przestrzeni nazw

   //zadanie_0::display(5,time_converter(5));
   zadanie_0::display(5,60,zadanie_2::convert(5,60));
   zadanie_0::display(10,20,zadanie_2::convert(10,20));

   zadanie_3::display(50,zadanie_3::calculate(50));
   zadanie_3::display(10,zadanie_3::calculate(10));
   zadanie_3::display(-20,zadanie_3::calculate(-20));
   zadanie_3::display(0,zadanie_3::calculate(0));

   zadanie_4::display(3,zadanie_4::calculate(3));
   zadanie_4::display(4,zadanie_4::calculate(4));
   zadanie_4::display(6,zadanie_4::calculate(6));
   zadanie_4::display(0,zadanie_4::calculate(0));
   
   zadanie_5::display(zadanie_5::calculate(1,1));
   zadanie_5::display(zadanie_5::calculate(7,5));
   zadanie_5::display(zadanie_5::calculate(38,8));

   zadanie_6::display(2005,zadanie_6::calculate(2005));
   zadanie_6::display(1950,zadanie_6::calculate(1950));
   zadanie_6::display(1900,zadanie_6::calculate(1900));
   zadanie_6::display(1901,zadanie_6::calculate(1901));
   zadanie_6::display(1899,zadanie_6::calculate(1899));

   zadanie_8::display(2,5,11,zadanie_8::evaluate(2,5,11));
   zadanie_8::display(3,5,11,zadanie_8::evaluate(3,5,11));
   zadanie_8::display(2,3,8,zadanie_8::evaluate(2,3,8));
   zadanie_8::display(3,3,8,zadanie_8::evaluate(3,3,8));
   zadanie_8::display(2,12,24,zadanie_8::evaluate(2,12,24));
   
   zadanie_9::display(1,59,3568,zadanie_9::evaluate(1,59,3568));
   zadanie_9::display(2,300,15000,zadanie_9::evaluate(2,300,15000));
   zadanie_9::display(15,955,59400,zadanie_9::evaluate(15,955,59400));

  
 
 

}

// utworzenie przestrzeni nazw, a w niej same definicje
namespace zadanie_0 {
    void display(int a, int b, int c)
    {
        std::cout << "W ciagu "<< a << " sekund "  << "wyswietli sie " << c <<" poniewaz odswiezanie wynosi " << b << std::endl;
    }
}

namespace zadanie_2 {
  
    int convert(int sec, int frequency)
    {
        int frames;

        frames = sec * frequency ;

        return frames;
    }
}
namespace zadanie_3 {
    void display(int a, int b)
    {
        if(a != 0){
        std::cout << "liczbe " << a << " zamien na ujemna, wynik funkcji: " << b << std::endl;
        }else{
        std::cout << "liczba " << a << " nie jest ani dodatnia ani ujemna" << std::endl;
        }
    }


  int calculate(int number){
      int inverted;

      if(number > 0){
          inverted = number - (2*number);
      }
      if(number < 0){
          inverted = number;
      }
      if(number == 0){
          inverted = number;
      }
      return inverted;
  }
}
namespace zadanie_4 {
    void display(int a, int b)
    {
        if(a > 2){
        std::cout << "w wielokacie foremnym o liczbie bokow " << a << " suma katow wynosi  " << b << std::endl;
        }else{
        std::cout << "podana ilosc bokow nie spelnia warunkow wielokata foremnego" << std::endl;
        }
    }


  int calculate(int polygon){
    int Angles_sum;
    Angles_sum = (polygon - 2) * 180;

    
      return Angles_sum;
  }  
}
namespace zadanie_5 {

    void display(int a){
        std::cout << " wynik meczu to: " << a << std::endl;
    }
    int calculate(int bucket_2, int bucket_3 ){
        int final_score;
        final_score = (bucket_2*2) + (bucket_3 * 3);
        return final_score;
    }
}
namespace zadanie_6 {

    void display(int a, int b){
        std::cout << " rok: " << a << " to "  << b << " wiek " << std::endl;
    }
    int calculate(int year ){
        int age;
        if ( year % 100 == 0){
            age = year / 100;
        }else{
            age = (year / 100) + 1;
        }
        
        return age;
       
    }
}
namespace zadanie_8 {

    void display(int a, int b, int c, bool d){
        if(d == true){
        std::cout << "Wszystkich kawalkow: "<< c << " Przy stole jest: "<< a << " osob x " << b << " kawalki  " << " mozliwe jest sprawiedliwe podzielenie ciasta" << std::endl;
        }else{
        std::cout << "nie da sie podzielic kawalkow rowno" << std::endl;
        }
    }
    
    bool evaluate(int people, int pieces_per_person, int total_number_of_pieces){
        int sum;

        sum = people*pieces_per_person;
        if( sum <= total_number_of_pieces){
            return true;
        }else{
            return false;
        }
    }
}
namespace zadanie_9 {

    void display(int h, int m, int s, int winner){
        std::cout << "Ktora wartosc jest najdluzej trwajaca? " << h << " h, " << m << " m," << " czy " << s << " s? " << "odpowiedz : " << winner <<std::endl;
    }
    int evaluate(int h, int m, int s){
        int count_m;
        int count_h;
        int winner;

        count_m = m * 60;
        count_h = h *3600;
        

        if( (count_m > count_h) && (count_m > s)){
            
            winner = m;
        }
        if ((s > count_m) && (s > count_h)){
            winner = s;
        }
        if((count_h > s) && count_h > count_m){
           
            winner = h;
        }
        
         return winner;
    }
   
}