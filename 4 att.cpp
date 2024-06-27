#include <iostream>

int main()
{
   int numero;
   std::cout << "digite um numero:";
   std::cin >> numero;
   
   
   if (numero % 2 ==0) {
       std::cout<< "o numero e par" << std::endl;
       
   }else{
       
       std::cout << "o numero e impar" << std::endl;
   }
   
   return 0;
   
}  