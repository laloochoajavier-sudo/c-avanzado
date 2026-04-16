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
std::vector<int> records(10); //declaramos un vector de enteros llamado records
std::vector<char> letras(10); //declaramos un vector de caracteres llamado letras
for(int i=0; i<10; i++){
    std::cout<<records[i]<<'\n';
}
return 0;
}