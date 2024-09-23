#include <iostream>
using namespace std;
int main (){
cout << "*****************************************"<<endl;
cout << "* Bienvenido al Juego de la Adivinanza! *"<<endl;
cout << "*****************************************"<<endl;

const int NUMERO_SECRETO = 42;
int adivina;

bool no_acerto = true;
int intentos = 0;
double puntos = 1000.0;  // ...guarda los puntos ganados 

while (no_acerto){
    intentos ++;
    cout << "Tentativa " << intentos << endl;
    cout << "¿cuál es el número? ";
    cin >> adivina;
    double puntos_perdidos = abs(adivina - NUMERO_SECRETO)/2.0;
    puntos = puntos - puntos_perdidos;
    cout << "El valor de su número es: " << adivina << endl;

    bool acerto = adivina ==  NUMERO_SECRETO;
    bool mayor = adivina > NUMERO_SECRETO;

   if(acerto){
       cout << "Felicitaciones!!! ... adivinó el número secreto" << endl;
       no_acerto = false;
   }

   else if(mayor){
       cout << "El número ingresado es mayor que el número secreto" << endl;
   }

   else{
       cout << "El número ingresado es menor que el número secreto" << endl;
   }


}

 cout << "Finalizó el juego" << endl;
 cout << "Adivinó el número secreto en " << intentos << " intentos." << endl;
 cout.precision(2);
 cout << fixed;
 cout << "Su puntuación fue de " << puntos << " puntos" << endl;
}
