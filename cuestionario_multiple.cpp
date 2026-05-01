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

void preguntas(int &puntos){
std::string respuesta1;
std::string respuesta2;
std::cout<<"Cual es la capital de Francia?"<<std::endl;
std::cout<<"a) Londres"<<std::endl;
std::cout<<"b) Paris"<<std::endl;
std::cout<<"c) Roma"<<std::endl;
std::cout<<"d) Berlin"<<std::endl;
std::cin>>respuesta1;
respuesta1 = toUpper(respuesta1);
    if(respuesta1 == "B") {
        std::cout<<"Correcto!"<<std::endl;
        puntos++;
    }else if(respuesta1 == "A" || respuesta1 == "C" || respuesta1 == "D"){
        std::cout<<"Incorrecto!"<<std::endl;
    }else{
        std::cout<<"Respuesta no valida!"<<std::endl;}
std::cout<<"en que ano fue echo c++"<<'\n';
std::cout<<"a) 1980"<<std::endl;
std::cout<<"b) 1985"<<std::endl;
std::cout<<"c) 1990"<<std::endl;
std::cout<<"d) 1995"<<std::endl;
std::cin>>respuesta2;
respuesta2 = toUpper(respuesta2);
    if(respuesta2 == "B"){
        std::cout<<"Correcto!"<<std::endl;
        puntos++;
    }else if(respuesta2 == "A" || respuesta2 == "C" || respuesta2 == "D"){
        std::cout<<"Incorrecto!"<<std::endl;
    }else{
        std::cout<<"Respuesta no valida!"<<std::endl;
    }
}

int main(){
std::cout<<"Bienvenido a este cuestionario de opciones multiples!"<<std::endl;
int punto = 0;
preguntas(punto);
std::cout<<"Tu puntuacion es: "<<punto<<std::endl;

    return 0;
}