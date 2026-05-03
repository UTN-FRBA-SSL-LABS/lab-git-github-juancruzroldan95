#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(int a, int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */

// Esta función toma los dos parametros que recibe, y los multplica inline en el return
// Se agregan las constantes para los parametros
int multiplicar(const int a,const int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */
// esPar recibe 2 parametros. Verifica si el número recibido es par. Devuelve 1 si lo es, y 0 si es impar.
int esPar(int n) {
    return (n % 2) == 0; /* version main */
}
