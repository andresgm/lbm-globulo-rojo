#ifndef _HELPER_H_
#define _HELPER_H_

#include "nd-array.h"

#define CELLS(s, x, y, z, a) ACCESS5(cells, 2, X, Y, Z, 19, s, x, y, z, a)
#define FLAGS(x, y, z) ACCESS3(flags, X, Y, Z, x, y, z)
#define VEL(x, y, z, k) ACCESS4(vel, X, Y, Z, 3, x, y, z, k)
#define RHO(x, y, z) ACCESS3(rho, X, Y, Z, x, y, z)
#define FUERZA(x, y, z, k) ACCESS4(fuerza, X, Y, Z, 3, x, y, z, k)

#define VERTEX(i, j) ACCESS2(vertex, nNodos, 3, i, j)
#define FACES(i, j) ACCESS2(faces, nCeldas, 3, i, j)
#define VELOCIDAD(i, j) ACCESS2(velocidad, nNodos, 3, i, j)
#define VELOCIDAD2(i, j) ACCESS2(velocidad2, nNodos, 3, i, j)
#define NORMALESPORNODO(i, j) ACCESS2(normalesPorNodo, nNodos, 3, i, j)
#define FUERZA_MESH(i, j) ACCESS2(fuerza, nNodos, 3, i, j)
#define CARASPORNODO(i, j) ACCESS2(carasPorNodo, nNodos, 7, i, j)
#define NORMALESPORCARA(i, j) ACCESS2(normalesPorCara, nCeldas, 3, i, j)
#define ANGULOSPORNODO(i, j) ACCESS2(angulosPorNodo, nNodos, 7, i, j)

#define CELLS_D(s, x, y, z, a) ACCESS5(cells_d, 2, X, Y, Z, 19, s, x, y, z, a)
#define FLAGS_D(x, y, z) ACCESS3(flags_d, X, Y, Z, x, y, z)
#define VEL_D(x, y, z, k) ACCESS4(vel_d, X, Y, Z, 3, x, y, z, k)
#define RHO_D(x, y, z) ACCESS3(rho_d, X, Y, Z, x, y, z)
#define FUERZA_D(x, y, z, k) ACCESS4(fuerza_d, X, Y, Z, 3, x, y, z, k)

#define VERTEX_D(i, j) ACCESS2(vertex_d, nNodos, 3, i, j)
#define FACES_D(i, j) ACCESS2(faces_d, nCeldas, 3, i, j)
#define VELOCIDAD_D(i, j) ACCESS2(velocidad_d, nNodos, 3, i, j)
#define VELOCIDAD2_D(i, j) ACCESS2(velocidad2_d, nNodos, 3, i, j)
#define FUERZA_MESH_D(i, j) ACCESS2(fuerza_mesh_d, nNodos, 3, i, j)

#endif
