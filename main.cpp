#include <iostream>
#include "menu.h"
#include "estadisticas.h"
#include <ctime>
#include "rlutil.h"
#include "console_utils.h"
using namespace std;

int main(){

    srand(time(0));
    EstadisticasSesion estadisticasSesion;
    int opcion;

        do{
            limpiarPantalla();
            opcion = OpcionesDeMenu();
            ejecutarOpcionDeMenu(opcion,estadisticasSesion);
            pausarConsola();
        }
        while(opcion != 0);


        return 0;
    }
