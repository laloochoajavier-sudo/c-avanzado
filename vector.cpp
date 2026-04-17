//vector: un arreglo muy similar sirve para almacenar datos
//pueden crecer o defcrecer de forma dinamica
//la diferencia con el array es que hay que prefijar el tamaño del array, mientras que el vector no necesita eso
//tiene una sintaxis mas sencilla que el array
//proporciona funciones para agregar, eliminar y acceder a los elementos de forma sencilla
//tambien se puede usar en punteros 
//tienen un tamaño dinámico, lo que significa que pueden crecer o reducirse según sea necesario
//los elementos en el interior son del mismo tipo lo que permite un acceso eficiente a los datos
//se accede a los elementos mediante índices, al igual que con los arrays
//el primer elemento es indice 0, el segundo es índice 1, y así sucesivamente
//el ultimo elemento es indice n-1, donde n es el número total de elementos en el vector
//se suelene usar de los vectores usando bucles para recorrerlos y realizar operaciones en cada elemento
#include <iostream>
#include <vector>
int main(){
std::vector<int> records{10,25,30}; //declaramos un vector de enteros llamado records

std::vector<char> letras{'x','y','z'}; //declaramos un vector de caracteres llamado letras

std::vector<double> salario_base(350,2500.50); //declaramos un vector de doubles llamado salario_base con 350 elementos, cada uno con el valor 2500.50

std::vector<std::string> nombres(250,"John"); //declaramos un vector de strings llamado nombres con 250 elementos

for(int i=0; i<salario_base.size() && i<nombres.size(); i++){ //.size() devuelve el número de elementos en el vector
    std::cout<<nombres[i]<<" "<<salario_base[i]<<'\n';
}

int i=349;
//es mejor el bucle while para recorrer el vector de atrás hacia adelante, ya que el índice se decrementa en cada iteración
while(i<salario_base.size()){
    std::cout<<salario_base[i]<<'\n';
    i++;
}
return 0;
}