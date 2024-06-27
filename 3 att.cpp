#include <iostream>
using namespace std;

int main() {
  
    int lado1, lado2, lado3;

   
    cout << "Digite o comprimento do primeiro lado: ";
    cin >> lado1;
    cout << "Digite o comprimento do segundo lado: ";
    cin >> lado2;
    cout << "Digite o comprimento do terceiro lado: ";
    cin >> lado3;


    bool formaTriangulo = (lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1);

   
    if (formaTriangulo) {
        cout << "Os comprimentos informados podem formar um triângulo." << endl;
    } else {
        cout << "Os comprimentos informados NÃO podem formar um triângulo." << endl;
    }

    return 0;
}
