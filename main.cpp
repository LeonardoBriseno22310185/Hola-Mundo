#include<iostream>
#include<Alimento.hpp>
#include<Mascota.hpp>
#include<Dibujo.hpp>
#include<Animacion.hpp>
#include<list>

using namespace std;

int main(int argc, char const *argv[])
{
    Mascota firulais,mascota;
    Alimento carne(10);

    firulais.Comer(carne);

    firulais.jugar();
    firulais.jugar();
    firulais.jugar();

    cout
    <<"vida de firulais"
    <<firulais.LeerVida()
    <<endl;

    Dibujo dibujo("./assets/Dolphin.txt");
    dibujo.Dibujar();

    Dibujo dibujo1("./assets/Fox.txt");
    dibujo.Dibujar();
    
    list<Dibujo> dibujos;
    dibujos.push_back(dibujo);
    dibujos.push_back(dibujo1);
    
    Animacion animacion(dibujos);
    animacion.Reproducir();

    
    
    
    return 0;


}
