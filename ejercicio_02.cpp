// Muestra de la declracion de un constructor
// un destructor de la clase Gato
#include <iostream>
using namespace std;
class Gato{
public:
Gato(int pesoInicial);
~Gato();
int ObtenerPeso();
void AsignarPeso(int edad);
void Maullar();
private:
int suPeso;
};
//Constructor de Gato
Gato::Gato(int pesoInicial){
suPeso = pesoInicial;
cout << "Se ha creado un objeto Gato de peso " << pesoInicial << endl;
}
Gato::~Gato(){
cout << "El objeto Gato sera eliminado :,V " << endl;
}
// ObtenerPeso, metodo de acceso publico
// regresa el valor de su miembro suPeso


int Gato::ObtenerPeso(){
return suPeso;
}
// Definicion de AsignarPeso, metodo de
// acceso publico
void Gato::AsignarPeso(int peso){
// asignar a la variable miembro su Peso el
// valor pasado por el parametro peso
suPeso = peso;
}
// definicion del metodo Maullar
// regresa: void
// parametros: ninguno
// accion: imprime "miauu"
void Gato::Maullar(){
cout << "Miau" << endl;
}
// crear un gato, asignar un valor a su peso, hacer que
// maulle, que nos diga su peso, y que vuelva a maullar.
int main(){
Gato Pelusa(5);
Pelusa.Maullar();
cout << "Pelusa es un gato que tiene";
cout << Pelusa.ObtenerPeso() << "kg de peso" << endl;
cout <<pelusa años dedad (5) << endl;
Pelusa.Maullar();
Pelusa.AsignarPeso(6);
cout << "Ahora pelusa tiene " ;
cout << Pelusa.ObtenerPeso() << " kg de peso" << endl;
return 0;
}
