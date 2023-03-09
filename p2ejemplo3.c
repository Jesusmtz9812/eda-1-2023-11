#include <stdio.h>

    int main(){
        short arr[5], *apArr;
        apArr = &arr[0];
        printf("Direccion del arreglo en la prinera posicion: %x\n",&arr[0]);
        printf("Direccion del arreglo: %x\", %arr);
        printf("Direccion del apuntador: %x\n",apArr);

        return 0;
        

    }