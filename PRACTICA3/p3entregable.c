#include <stdio.h>

    int main(){
// declaramos nuestras variables
    int x, y;
    int tablero[8][8];
    short opcion = 0;
    
    struct movimientos{
        int momientosCaballo;
        int movimientosAlfil;
        int movimientosTorre;
        int movimientosReina;
        int movimientosrey

    };

    void coordenadas(struct movimientos *);
    void movimientos(struct movimientos *);


      for (i=0; i<8; i++){
        for (j=0; j<8; j++){
            tablero[i][j]=0;

        };
    };


    printf("Bienvenido al programa de los movimientos del ajedres");
//sentencia while de opciones del menu 
    while(1)
        printf("\nEliga una de las dos piezas a mover");
        printf("1)Movimientos del Caballo.\n");
        printf("2) Movimientos del Alfil.\n");
        printf("3) Movimientos de la Torre.\n");
        printf("4) Movimientos de la Reina");
        printf("5) Movimientos del Rey");
        printf("6)Salir");
        scanf("%i",&opcion);
// sentencia swtich para las opciones a rezaliar 
        switch(opcion){
            case 1:
                printf("Ingrese las coordenadas del Caballo x,y:");
                scanf("%i, %i", &x, &y);
                movimientosCaballo(coordenadas);
                break;

            case 2:
                printf("Ingrese las coordenadas del la Alfil");
                scanf("%i, %i", &x, &y");
                movimientosAlfil(coordenadas);
                break;

            case 3:
                printf("Ingrese las coordenadas de la Torre");
                scanf("%i, %i, &x, &y);
                movimientosTorre(coordenadas);
                break;
            case 4:
                printf("Ingrese las coordenadas del la Reina");
                scanf("%i, %i", &x, &y");
                movimientosReina(coordenadas);
                break;

            case 5:
                printf("Ingrese las coordenadas del Rey");
                scanf("%i, %i, &x, &y);
                movimientosRey(coordenadas);
                break

            case 6:
                return 0;
            default:
                printf("Opcion no valida");



        }



    }
    return 0;

    }

            void movimientosCaballo(int *coordenadas){
            for (i=x, j=y; (i<8||j>=0); i++, j--){
                if (x+y == i+j){
                    tablero[i][j]=1;
            }; };
            for (i=x, j=y; (j){
                    tablero[i][j]=1;
            }; };
            for (i=x, j=y; (i<8||j<=0); i++, j++){
                if (i>b&&j>a){
                    tablero[i][j]=1;
            };  };
            for (i=x, j=y; (i>=0||j>=0); i--, j--){
                if (i<b&&j<a){
                    tablero[i][j]=1;
            };  };

             void movimientosAlfil(int *coordenadas){
            for (i=x, j=y; (i<8||j>=0); i++, j--){
                if (x+y == i+j){
                    tablero[i][j]=1;
            }; };
            for (i=x, j=y; (j){
                    tablero[i][j]=1;
            }; };
            for (i=x, j=y; (i<8||j<=0); i++, j++){
                if (i>a&&j<b){
                    tablero[i][j]=1;
            };  };
            for (i=x, j=y; (i>=0||j>=0); i--, j--){
                if (i>a&&j<b){
                    tablero[i][j]=1;
            };  };


             void movimientosTorre(int *coordenadas){
            for (i=x, j=y; (i<8||j>=0); i++, j--){
                if (x+y == i+j){
                    tablero[i][j]=1;
            }; };
            for (i=x, j=y; (j){
                    tablero[i][j]=1;
            }; };
            for (i=x, j=y; (i<8||j<=0); i++, j++){
                if (i>a&&j>b){
                    tablero[i][j]=1;
            };  };
            for (i=x, j=y; (i>=0||j>=0); i--, j--){
                if (i>a&&j>b){
                    tablero[i][j]=1;
            };  };


            void movimientosReina(int *coordenadas){
            for (i=x, j=y; (i<8||j>=0); i++, j--){
                if (x+y == i+j){
                    tablero[i][j]=1;
            }; };
            for (i=x, j=y; (j){
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




        void movimientosrey(int *coordenadas){

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
