//metodos at() sirve para acceder a un elemento concreto que posee una posicion concreta
//metodos push_back() sirve para agrerar elementos en un vector
//VECTORES dinamicos, es decir, pueden crecer o decrecer segun se necesite
#include <iostream>
#include <vector>
int main()
{
std::vector<int> numeros {25,10,50,35}; //creamos un vector de enteros llamado numeros

numeros.at(3)=100;//modificamos el valor del elemento en la posicion 3 del vector numeros, asignandole el valor 100

std::cout << "El numero en la posicion 3 es: " << numeros.at(3) << std::endl; //accedemos al elemento en la posicion 3 del vector numeros
//.at si intentas acceder a una pocision que no existe, lanza una excepcion, mientras que con los corchetes [] no se lanza una excepcion y puede causar un comportamiento indefinido
    
    return 0;
}