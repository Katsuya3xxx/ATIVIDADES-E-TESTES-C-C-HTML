#include <iostream>

using namespace std; 


int main()
{
    int nota=60;
    if (nota ==100){
        std::cout<<"aluno ou aluna show";
    }
    else if (nota <= 99 && nota>=60){
       std::cout<<"voce passou";
    }
        else if(nota <=59&&nota>=40){
           std::cout<<"recuperaçao";
        }
        else{
            std::cout<<"voce reprovou";
        }    return 0;
    }
    
