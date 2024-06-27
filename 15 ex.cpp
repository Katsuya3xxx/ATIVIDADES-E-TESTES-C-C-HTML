#include <iostream>

using namespace std; 


int main()
{
  int dia;
  
  cout << "digite o numero do dia da semana (1-7):";
  cin >> dia;
  
  switch (dia){
      case 1:
      cout << "domingo" << endl;
      break;
      
       case 2:
      cout << "Segunda-feira" << endl;
      break;
      
       case 3:
      cout << "terça-feira" << endl;
      break;
      
       case 4:
      cout << "Quarta-feira" << endl;
      break;
      
       case 5:
      cout << "Quinta-feira" << endl;
      break;
      
       case 6:
      cout << "Sexta-feira" << endl;
      break;
      
       case 7:
      cout << "Sábado" << endl;
      break;
      
      default:
      cout << "dia invalido" << endl;
      break;
      
      
  }
      return 0;
}

