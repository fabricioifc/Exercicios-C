#include <stdarg.h>

int scan_int(char* mensagem) {
    int n;
    printf("%s", mensagem);
    scanf("%d", &n);
    return n;
}

float scan_float(char* mensagem) {
    float n;
    printf("%s", mensagem);
    scanf("%f", &n);
    return n;
}

int verificar_maior_igual(int a, int b) {
    return a >= b;
}

void pular_linha() {
    printf("\n");
}

void imprimir_mensagem(char* mensagem, ...) {
    va_list args;
    va_start(args, mensagem);
    vprintf(mensagem, args);
    va_end(args);
}