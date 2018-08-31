#include <iostream>
using namespace std;

int busquedaSecuencial(int arr[], int num){
    int *p;
    int size = (sizeof(arr)/ sizeof(int));
    for(int i=0; i < size; i++){
        p = &arr[0];
        if(num == *p){
            cout << "El numero de carne: "<< *p<< " ha sido encontrado"<< endl;
        }else{
            p += 1;
        }
    }

}

int main() {
    int listaCarnet[] = {24, 35, 59, 66, 71, 88, 97};
    cout << "Ingrese el numero de carne que desea buscar de la lista" << endl;
    int num1;
    cin >> num1;
    busquedaSecuencial(listaCarnet, num1);
    cout << num1 << endl;
    return 0;
}