#pragma once
#include <string>
#include "estadisticas.h"

int MainJuego(EstadisticasSesion &estadisticasSesion);
bool jugarTurno(std::string nombreJugador, int &stockJugador, int &stockOponente, int &puntajeJugador, int ronda);
