#include <iostream> 
using namespace std;

int main()
{
  
  float num1,num2,resultado;
  char operacao;
  
  cout << "digite o primeiro numero: ";
  cin >> num1;
  cout <<"digite o segundo numero";
  cin >> num2;
  cout << "escolha uma operacao (+,-,*,/,):";
  cin >> operacao;

 if(operacao =='+'){
 resultado = num1 + num2;
}else if(operacao == '-'){
 resultado = num1 - num2;
}else if (operacao == '*'){
resultado = num1 * num2;
}else if (operacao == '/'){
    if(num2 != 0){
resultado = num1 / num2;
    }else{
                cout << "Operação inválida";
                return 0;
    }
   
} else {
        cout << "Operação inválida";
                        return 0;
}
        cout << "Resultado: "<< resultado<<endl;

                return 0;
