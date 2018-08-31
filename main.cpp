#include <iostream>
using namespace std;

int busquedaSecuencial(int arr[], int num, int size){
    int *p;
    bool band = false;
    for(int i=0; i < size; i++){
        p = &arr[i];
        if(num == *p){
            band = true;
            cout << "El numero de carne: "<< *p<< " ha sido encontrado en la posicion: "<< i << endl;
        }
    }
    if(!band){
        cout << "El numero de carne no ha sido encontrado"<< endl;
    }

}

int main() {
    int listaCarnet[7] = {2, 35, 59, 2, 71, 88, 97};
    cout << "Ingrese el numero de carne que desea buscar de la lista: " << endl;
    int n = (sizeof(listaCarnet)/ sizeof(int));
    int num1;
    cin >> num1;
    busquedaSecuencial(listaCarnet, num1, n);
    return 0;
}