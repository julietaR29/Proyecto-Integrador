#include <iostream>
#include "estadisticas.h"
#include "funciones.h"

using namespace std;

void registrarResultado(EstadisticasSesion &estadisticasSesion, const string &ganador, int puntajeGanador) {
    estadisticasSesion.partidasJugadas++;
    estadisticasSesion.ultimaPartidaEmpatada = puntajeGanador == -1;

    if (estadisticasSesion.ultimaPartidaEmpatada) {
        estadisticasSesion.ultimoGanador = "";
        estadisticasSesion.ultimoPuntajeGanador = 0;
        return;
    }

    estadisticasSesion.ultimoGanador = ganador;
    estadisticasSesion.ultimoPuntajeGanador = puntajeGanador;

    if (puntajeGanador > estadisticasSesion.mejorPuntaje) {
        estadisticasSesion.mejorJugador = ganador;
        estadisticasSesion.mejorPuntaje = puntajeGanador;
    }
}

void estadisticas(const EstadisticasSesion &estadisticasSesion) {
    mostrarBannerEstadisticas();
    cout << "================= ESTADISTICAS ACTUALES =================" << endl << endl;

    if (estadisticasSesion.partidasJugadas == 0) {
        cout << "Aun no hay registros de partidas jugadas." << endl << endl;
    }
    else {
        cout << "Partidas jugadas: " << estadisticasSesion.partidasJugadas << endl;

        if (estadisticasSesion.ultimaPartidaEmpatada) {
            cout << "Ultimo resultado: empate" << endl;
        }
        else {
            cout << "Ultimo ganador: " << estadisticasSesion.ultimoGanador << endl;
            cout << "Puntaje del ultimo ganador: " << estadisticasSesion.ultimoPuntajeGanador << endl;
        }

        if (estadisticasSesion.mejorPuntaje > 0) {
            cout << "Mejor puntaje: " << estadisticasSesion.mejorPuntaje << " puntos" << endl;
            cout << "Jugador con mejor puntaje: " << estadisticasSesion.mejorJugador << endl;
        }
    }

    cout << endl << "=========================================================" << endl;
}
