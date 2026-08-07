#include <iostream>
#include "console_utils.h"
#include "menu.h"
#include "juego.h"
#include "estadisticas.h"
#include "rlutil.h"
using namespace std;

int OpcionesDeMenu(){

int opcion;
rlutil::setColor(rlutil::YELLOW);
cout << " _____  _   _ ______ ______  _____  _   _  _____   ___  ______  _____  _____ " << endl;
cout << "|  ___|| \\ | ||  ___|| ___ \\|  ___|| \\ | ||_   _| / _ \\ |  _  \\|  _  |/  ___|" << endl;
cout << "| |__  |  \\| || |_   | |_/ /| |__  |  \\| |  | |  / /_\\ \\| | | || | | |\\ `--. " << endl;
cout << "|  __| | . ` ||  _|  |    / |  __| | . ` |  | |  |  _  || | | || | | | `--. \\" << endl;
cout << "| |___ | |\\  || |    | |\\ \\ | |___ | |\\  |  | |  | | | || |/ / \\ \\_/ //\\__/ /" << endl;
cout << "\\____/ |_| \\_/\\_|    \\_| \\_|\\____/ |_| \\_/  \\_/  \\_| |_/|___/   \\___/ \\____/ " << endl;
cout << endl << endl << endl;

cout << " +--------------------------------+" << endl;
cout << " |          MENU PRINCIPAL        |" << endl;
cout << " +--------------------------------+" << endl;
cout << " | [1] Jugar                      |" << endl;
cout << " | [2] Tabla de Estadisticas      |" << endl;
cout << " | [3] Creditos                   |" << endl;
cout << " | [0] Salir                      |" << endl;
cout << " +--------------------------------+" << endl;
cout << " Ingrese una opcion: ";

opcion = leerEnteroEnRango(0, 3, "Opcion incorrecta");
return opcion;
}

void ejecutarOpcionDeMenu(int opcion, EstadisticasSesion &estadisticasSesion){

switch(opcion)
{
case 1:

    limpiarPantalla();
    MainJuego(estadisticasSesion);
    break;

case 2:
    limpiarPantalla();
    estadisticas(estadisticasSesion);
    break;

case 3:

    limpiarPantalla();
    cout << " _____ ______  _____ ______  _____  _____  _____  _____ \n";
    cout << "/  __ \\| ___ \\|  ___||  _  \\|_   _||_   _||  _  |/  ___|\n";
    cout << "| /  \\/| |_/ /| |__  | | | |  | |    | |  | | | |\\ `--. \n";
    cout << "| |    |    / |  __| | | | |  | |    | |  | | | | `--. \\\n";
    cout << "| \\__/\\| |\\ \\ | |___ | |/ /  _| |_   | |  \\ \\_/ //\\__/ /\n";
    cout << " \\____/\\_| \\_|\\____/ |___/   \\___/   \\_/   \\___/ \\____/ \n";
    cout << "                                                        \n";
    cout << "                                                        \n";

    cout << "================= INFORMACION DEL GRUPO =================" << endl;
    cout << " " << endl;
    cout << "[ Grupo 11 ] " << endl;
    cout << " " << endl;
    cout << "[ Leandro Serrano ]" << endl;
    cout << " " << endl;
    cout << "[ Julieta Rodriguez ]" << endl;
    cout << " " << endl;
    cout << "[ Matias Candia Butvilofsky ]" << endl;
    cout << " " << endl;
    cout << "[ Fernando Raul Monzon ] " << endl;
    cout << " " << endl;
    cout << "=========================================================" << endl;
    break;
case 0:
    cout << endl << "Gracias por jugar!" << endl;
    break;
    }

}
