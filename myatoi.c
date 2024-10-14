#include <ctype.h>  // Para isspace

int my_atoi(const char *str) {
    int sign = 1;
    long result = 0;  // Usamos long para manejar el desbordamiento
    while (isspace(*str)) str++;  // Ignorar espacios en blanco
    if (*str == '+' || *str == '-') {
        if (*str == '-') sign = -1;
        str++;
    }
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }
    return sign * result;  // Aplicar el signo
}

