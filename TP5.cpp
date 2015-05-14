/* El programa pide dos números. valida que los mismos sean mayores que 0 (en caso que no sean,
vuelve a pedir) y calcula el perimetro del rectangulo resultante.
Autor: Cynthia Rozan
Ultima modificacion: 13/05/2015
*/

#include <iostream>
using namespace std;

double getNumeroPositivo();
double getPerimetro(double altura,double base);


int main(){

    cout << "Ingrese la base del rectangulo:" << endl;
    double b = getNumeroPositivo();
    cout << "Ingrese la altura del rectangulo:" << endl;
    double h = getNumeroPositivo();

    cout << "El perimetro del rectangulo es de " << getPerimetro(h,b) << endl << "Hasta luego!";
    return 0;
}

double getNumeroPositivo(){
    double n;
    cin >> n;
    while (n <= 0){
        cout << "Ingrese un numero mayor que cero:" << endl;
        cin >> n;
    }
    return n;
}

double getPerimetro(double altura,double base){

    return (altura + base)*2;

}

