#include <iostream>
#include <math.h>

using namespace std;


// Lo que hacemos es ir dividiendo el n�mero entre 10, entre 100, entre 1000... Hasta que el n�mero y el resto den lo mismo.
int cuantasCifras(int numero) {
 int divisor = 10;
 int residuo = 0;
 int cifras_aux = 0;

 while (residuo != numero){
  residuo = numero % divisor;
  divisor = divisor * 10;
  cifras_aux++;
 }
 cifras_aux--;
 return cifras_aux;
}

void dividir_en_digitos(int numero, int cifras) {

  int divisor = 10;
  int residuo = 0;
  int digito = 0;
  int cifras_aux = cifras;
 
 
  //Se eleva el divisor de forma que tenga el mismo n�mero de cifras que nuestro n�mero inicial
  divisor = pow(divisor, (cifras_aux));
 
  
 while (cifras_aux >= 0){
   //El cociente son Digitos de izquiera a derecha
   digito = numero / divisor;
     
   //El residuo se convierte en el numero
   residuo = numero % divisor;
   numero = residuo;
     
   //El divisor disminuye
   divisor = divisor / 10;
   cout << "digito: " << digito << endl;
   //cifras_aux--;
 }
}



int main() {
 
  int num;
  cout << "Ingrese un numero para mostrarlo separado en digitos: " << endl; 
  cin >> num; 

  dividir_en_digitos(num, cuantasCifras(num));
 
  system("PAUSE");
  return 0;
 
}
