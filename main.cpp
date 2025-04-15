#include <iostream>

using namespace std;

class Rectangulo{
private:
    float _base;
    float _altura;
public:

    float getBase();
    void setBase(float base);

    float getAltura();
    void setAltura(float altura);

    void cargar();
    void calcularArea();
    void calcularPerimetro();
};

int main(){
    float base, altura;

    Rectangulo rectangulo;

    rectangulo.cargar();

    /*cout << "Ingrese la base del rectangulo: " << endl;
    cin>>base;
    cout << "Ingrese la altura del rectangulo: " << endl;
    cin>>altura;*/

    rectangulo.calcularArea();
    rectangulo.calcularPerimetro();

    return 0;
}

float Rectangulo::getBase(){
    return _base;
}
void Rectangulo::setBase(float base){
    _base = base;
}

float Rectangulo::getAltura(){
    return _altura;
}
void Rectangulo::setAltura(float altura){
    _altura = altura;
}
void Rectangulo::cargar(){
    cout << "Ingrese la base del rectangulo: ";
    cin>>_base;
    cout << "Ingrese la altura del rectangulo: ";
    cin>>_altura;
}

void Rectangulo::calcularArea(){
    float resultado;

    resultado = _base * _altura;
    cout<< "El total del area del rectangulo ingresado es de: "<<resultado<<endl;
}

void Rectangulo::calcularPerimetro(){
    float resultado;

    resultado = (_base*2)+(_altura*2);
    cout<< "El total del perimetro del rectangulo ingresado es de: "<<resultado<<endl;
}
