#include <stdio.h>

    int main(){
// declaramos nuestras variables
    int x, y;
    int tablero[8][8];
    short opcion = 0;
    void movimientosRey(int *coordenadas);
    void movimientosReina(int *coordenadas);
      for (i=0; i<8; i++){
        for (j=0; j<8; j++){
            tablero[i][j]=0;

        };
    };


    printf("Bienvenido al programa de los movimientos del Rey y Reina");
//sentencia while de opciones del menu 
    while(1){
        printf("\nEliga una de las dos piezas a mover");
        printf("1)Movimientos del Rey.\n");
        printf("2) Movimientos de la Reina.\n");
        printf("3) Salir.\n");
        scanf("%i",&opcion);
// sentencia swtich para las opciones a rezaliar 
        switch(opcion){
            case 1:
                printf("Ingrese las coordenadas del Rey x,y:");
                scanf("%i, %i", &x, &y);
                movimientosRey(coordenadas);
                break;

            case 2:
                printf("Ingrese las coordenadas del la Reina");
                scanf("%i, %i", &x, &y");
                 movimientosReina(coordenadas);
                break;

            case 3:
                return 0;
            default:
                printf("Opcion no valida");



        }



    }
    return 0;

    }


// apuntadores utulizados
        void movimientosrey(int *coordenadas){

            for (i=x, j=y; (i<8||j>=0); i++, j--){
                if (x+y == i+j){
                    tablero[i][j]=1;
            }; };
            for (i=x, j=y; (i>=0||j<8); i--, j++){
                if (a+b == i+j){
                    tablero[i][j]=1;
            }; };
            for (i=x, j=y; (i<8||j<=0); i++, j++){
                if (i>a&&j>b){
                    tablero[i][j]=1;
            };  };
            for (i=x, j=y; (i>=0||j>=0); i--, j--){
                if (i<a&&j<b){
                    tablero[i][j]=1;
            };  };




        void movimientosReina(int *coordenadas){

            for (i=y, j=x; (i<8||j>=0); i++, j--){
                if (x+y == i+j){
                    tablero[i][j]=1;
            }; };
            for (i=y, j=x; (i>=0||j<8); i--, j++){
                if (a+b == i+j){
                    tablero[i][j]=1;
            }; };
            for (i=y, j=x; (i<8||j<=0); i++, j++){
                if (i>a&&j>b){
                    tablero[i][j]=1;
            };  };
            for (i=y, j=x; (i>=0||j>=0); i--, j--){
                if (i<a&&j<b){
                    tablero[i][j]=1;
            };  };






}
