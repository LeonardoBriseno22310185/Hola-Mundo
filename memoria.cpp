#include <iostream>
using namespace std;

class Enano
{
private:
    
    int altura;
    float edad;
    int vida;

public:

void inicializar(){
    this-> altura=2;
    this-> edad=150;
    this-> vida=10;
}
 
 void comer(){
        this->vida += 1;
}

};

int main()
{
    int a = 5;
    bool b = true;
    float f = 0.1;
    double d= 0.1;
    char c = 'a';
    Enano e;

    cout<<"tipos de datos nativos: "<<endl;
    cout<<"tamaño de : "<<sizeof(int)<<"bytes"<<endl;
    cout<<"tamaño de : "<<sizeof(bool)<<"bytes"<<endl;
    cout<<"tamaño de : "<<sizeof(float)<<"bytes"<<endl;
    cout<<"tamaño de : "<<sizeof(double)<<"bytes"<<endl;
    cout<<"tamaño de : "<<sizeof(char)<<"bytes"<<endl;
    cout<<"tamaño de : "<<sizeof(Enano)<<"bytes"<<endl;
    
    cout<<"Memoria Estatica C"<<endl;
    cout<<"Direcciones de int: "<<&a<<endl;
    cout<<"Direcciones de bool: "<<&b<<endl;
    cout<<"Direcciones de float: "<<&f<<endl;
    cout<<"Direcciones de double: "<<&d<<endl;
    cout<<"Direcciones de char: "<<static_cast<void*>(&c)<<endl;
    cout<<"Direcciones de enano: "<<&e<<endl;

    cout<<endl;
    cout<<"Memoria Dinamica C"<<endl;
    cout<<"Direccion Dinamica"<<malloc(2)<<endl;
    cout<<"Direccion Dinamica int "<<malloc(sizeof(int))<<endl;

    //Casteo de punteros C++
    Enano* direccion = (Enano*)malloc(sizeof(Enano));
    direccion->inicializar();
   
    //Punteros en C++
    Enano* instancia = new Enano();

    //Operador ->
     instancia -> comer(); 


    return 0;
}
