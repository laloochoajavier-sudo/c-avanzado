//vectors con almacenamiento
#include <iostream>
#include <vector>
int main(){
std::vector<int>records;

std::cout<<"cuantos elementos quieres en tu arreglo? ";
int elementos = 0;

std::cin>>elementos;

records.resize(elementos);

std::vector<int>records2(elementos);

for(int i = 0; i<elementos; i++){
    std::cout<<"ingresa el elemento "<<i+1<<": "<<std::endl;
    std::cin>>records.at(i);
}


std::cout<<"los elementos de tu arreglo son:"<<'\n';
for(int j = 0; j<records2.size(); j++){
    std::cout<<records.at(j)<<std::endl;
}

    return 0;


}