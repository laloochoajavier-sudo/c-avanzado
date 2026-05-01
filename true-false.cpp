#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>  
using namespace std;
string toUpper(const string& s) {
    string resultado = s;
    transform(resultado.begin(), resultado.end(), resultado.begin(),
              [](unsigned char c){ return toupper(c); });
    return resultado;
}
void preguntas(int &puntos);
int main(){
std::cout<<"Bienvenido a este cuestionario de verdadero o falso!"<<std::endl;
int puntos = 0;
preguntas(puntos);

std::cout<<"Gracias por participar estos son tus puntos: "<<puntos<<std::endl;

return 0;
}
void preguntas(int &puntos){

    std::cout<<"el cielo es verde?"<<std::endl;
    std::string cielo;
    std::cin>>cielo;
    cielo = toUpper(cielo);
    if(cielo == "NO"){
        std::cout<<"Correcto!"<<std::endl;
        puntos++;
    }
    else if(cielo == "SI"){
        std::cout<<"Incorrecto!"<<std::endl;
    }else{
        std::cout<<"Respuesta no valida!"<<std::endl;
    }
    std::cout<<"sale el sol de noche?"<<std::endl;
    std::string sol;
    std::cin>>sol;
    sol = toUpper(sol);
    if(sol == "NO"){
        std::cout<<"Correcto!"<<std::endl;
        puntos++;
    }else if(sol == "SI"){
        std::cout<<"Incorrecto!"<<std::endl;
    }else{
        std::cout<<"Respuesta no valida!"<<std::endl;
    }
    std::cout<<"tienes nombre?"<<std::endl;
    std::string nombre;
    std::cin>>nombre;
    nombre = toUpper(nombre);
    if(nombre == "SI"){
        std::cout<<"Correcto!"<<std::endl;
        puntos++;
    }else if(nombre == "NO"){
        std::cout<<"Incorrecto!"<<std::endl;
    }else{
        std::cout<<"Respuesta no valida!"<<std::endl;
    }
}