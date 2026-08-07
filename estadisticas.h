#pragma once
#include <string>

struct EstadisticasSesion {
    int partidasJugadas = 0;
    std::string ultimoGanador;
    int ultimoPuntajeGanador = 0;
    bool ultimaPartidaEmpatada = false;
    std::string mejorJugador;
    int mejorPuntaje = 0;
};

void registrarResultado(EstadisticasSesion &estadisticasSesion, const std::string &ganador, int puntajeGanador);
void estadisticas(const EstadisticasSesion &estadisticasSesion);
