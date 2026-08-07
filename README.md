# Juego de Dados - Proyecto Integrador C++

Aplicacion de consola desarrollada en C++ como trabajo integrador de programacion. El proyecto simula una partida de dados para dos jugadores, con turnos, puntajes, transferencia de dados y una pantalla de estadisticas de la sesion.

Este repositorio contiene una version adaptada del trabajo original grupal, organizada y documentada para portfolio.

## Caracteristicas

- Juego de dados para dos jugadores.
- Numero objetivo generado con dados de 12 caras.
- Tiradas con dados de 6 caras.
- Seleccion manual de dados para intentar alcanzar el objetivo.
- Puntaje calculado segun objetivo y cantidad de dados usados.
- Victoria automatica si un jugador se queda sin dados.
- Menu interactivo en consola.
- Estadisticas de la mejor partida de la sesion.

## Tecnologias

- C++17
- Code::Blocks
- MinGW / GCC
- rlutil para manejo basico de consola

## Estructura

- `main.cpp`: punto de entrada y bucle principal.
- `menu.cpp` / `menu.h`: menu principal y navegacion.
- `juego.cpp` / `juego.h`: flujo principal de la partida.
- `Funciones.cpp` / `Funciones.h`: funciones auxiliares del juego.
- `dados.cpp` / `dados.h`: dibujo de dados en consola.
- `estadisticas.cpp` / `estadisticas.h`: pantalla de estadisticas.
- `console_utils.cpp` / `console_utils.h`: utilidades de entrada y consola.
- `rlutil.h`: biblioteca externa incluida en el proyecto.

## Compilacion

### Opcion 1: Code::Blocks

1. Abrir `Proyecto Integrador.cbp`.
2. Seleccionar `Build`.
3. Ejecutar con `Run`.

### Opcion 2: consola con g++

```bash
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp menu.cpp juego.cpp Funciones.cpp dados.cpp estadisticas.cpp console_utils.cpp -o juego_dados
```

En Windows con Code::Blocks instalado, si `g++` no esta en el PATH, puede usarse una ruta similar a:

```powershell
& 'C:\Program Files\CodeBlocks\MinGW\bin\g++.exe' -std=c++17 -Wall -Wextra -pedantic main.cpp menu.cpp juego.cpp Funciones.cpp dados.cpp estadisticas.cpp console_utils.cpp -o juego_dados.exe
```

## Ejecucion

```bash
./juego_dados
```

En Windows:

```powershell
.\juego_dados.exe
```

## Autor

Julieta Rodriguez.

Proyecto academico adaptado para portfolio personal.
