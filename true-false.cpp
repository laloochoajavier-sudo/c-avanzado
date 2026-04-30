#include <iostream>
void preguntas(int puntos){

    std::cout<<"el cielo es verde?"<<std::endl;
    std::string cielo;
    std::cin>>cielo;
    if(cielo == "no"||cielo == "No"||cielo == "NO"||cielo == "nO"||cielo == "nó"||cielo == "Nó"||cielo == "NÓ"||cielo == "nÓ"){
        std::cout<<"Correcto!"<<std::endl;
        puntos++;
    }else{
        std::cout<<"Incorrecto!"<<std::endl;
    }
    std::cout<<"sale el sol de noche?"<<std::endl;
    std::string sol;
    std::cin>>sol;
    if(sol == "no"||sol == "No"||sol == "NO"||sol == "nO"||sol == "nó"||sol == "Nó"||sol == "NÓ"||sol == "nÓ"){
        std::cout<<"Correcto!"<<std::endl;
        puntos++;
    }else{
        std::cout<<"Incorrecto!"<<std::endl;
    }
    std::cout<<"tienes nombre?"<<std::endl;
    std::string nombre;
    std::cin>>nombre;
    if(nombre == "si"||nombre == "Si"||nombre == "SI"||nombre == "sI"||nombre == "sí"||nombre == "Sí"||nombre == "SÍ"||nombre == "sÍ"){
        std::cout<<"Correcto!"<<std::endl;
        puntos++;
}else{
        std::cout<<"Incorrecto!"<<std::endl;
    }
}
int main(){
std::cout<<"Bienvenido a este cuestionario de verdadero o falso!"<<std::endl;
preguntas(0);
std::cout<<"Gracias por participar estos son tus puntos: "<<puntos<<std::endl;


    return 0;
}

