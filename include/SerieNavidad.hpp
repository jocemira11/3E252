#pragma once 
#include <Foco.hpp> 

class SerieNavidad
{
private:
    Foco focos[10]
public: 
    SerieNavidad() {}
    ~SerieNavidad() {}
void Encender(){
    for (int numFoco =0; numfoco <10; numFoco++ )
    focos[numFoco].Encender();
}
void Encender(){
    for (int numFoco =0; numfoco <10; numFoco++ )
    focos[numFoco].Encender();
}
void Apagar(){
    for (int numFoco =0; numfoco <10; numFoco++ )
    focos[numFoco].Apagar();
}
void ImprimirSerie(){
    for (int numFoco =0; numfoco <10; numFoco++ )
    focos[numFoco].MostrarEstado();
}
}
}