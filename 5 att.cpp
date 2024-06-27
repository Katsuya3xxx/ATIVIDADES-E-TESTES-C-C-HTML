#include <iostream> 
#include <cstdlib> 
using namespace std; 


int main()
{
   
  int adivinhar = rand() % 100 + 1;
  
 
  int tentativas = 10 ;
  int palpite; 
  

  do
  {
  
 
  cout << "Tentativas:" << tentativas << ", digite um numero: ";
  
  cin >> palpite; 
 
 if (palpite > adivinhar) 
 {
     cout << "muito baixo!" << endl; 
 }
    else if(palpite >adivinhar)
    {
        cout << "muito alto!" << endl; 
    }
        tentativas --; 
  } while (palpite !=adivinhar && tentativas > 0); 
  
      if(palpite == adivinhar) 
  {
      
      cout << "Parabens! voce acertou o numero com "<< 8 - tentativas << " tentativas(s)!" << endl;
  }
  else
  {
     
      cout <<"voce nao conseguiu adivinhar o numero. o numero era: "<< adivinhar << "!" << endl; 
   
  }
    return 0; 
    
    
}

