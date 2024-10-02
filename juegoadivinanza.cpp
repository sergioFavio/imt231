#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main (){
cout << "******************************************"<<endl;
cout << "* Bienvenido al Juego de la Adivinanza!  *"<<endl;
cout << "* Ingrese un número en el rango: 1 a 100 *"<<endl;
cout << "******************************************"<<endl;

cout << endl;
cout << "Escoja el nivel de dificultad"<<endl;
cout << "Fácil (F), Medio (M) o Difícil (D)" << endl;

char dificultad;
cin >> dificultad;

int numero_tentativas;
if(dificultad=='F'){
    numero_tentativas = 15;
}
else if(dificultad=='M'){
    numero_tentativas = 10;
}
else {
    numero_tentativas = 5;
}

// Inicializar la semilla para generar números aleatorios
srand(time(0));
const int NUMERO_SECRETO = 1 + rand() % 100;  // Generar un número aleatorio entre 1 y 100
cout << "Número secreto aleatorio generado entre 1 y 100: " << NUMERO_SECRETO << endl;

int adivina;

bool no_acerto = true;
int intentos;
double puntos = 1000.0;  // ...guarda los puntos ganados

for(intentos=1; intentos <= numero_tentativas; intentos ++){
    //intentos ++;
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
       break;
   }

   else if(mayor){
       cout << "El número ingresado es mayor que el número secreto" << endl;
   }

   else{
       cout << "El número ingresado es menor que el número secreto" << endl;
   }


}

 cout << "Finalizó el juego" << endl;
 if(no_acerto){
     cout << "Lo siento ... perdió el juego" << endl;
 }
 else {
     cout << "Adivinó el número secreto en " << intentos << " intentos." << endl;
     cout.precision(2);
     cout << fixed;
     cout << "Su puntuación fue de " << puntos << " puntos" << endl;

 }



}
