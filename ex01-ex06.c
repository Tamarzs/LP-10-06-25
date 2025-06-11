#include <stdio.h>

void inicio() {
  printf("Content-type: text/html\n\n" );
  printf("<html>");
  printf("<head>");
  printf("<meta charset=\"UTF-8\">");
}

void aba(char *titulo) {
    printf("<title>%s</title>", titulo);
}

void meio() {
    printf("</head>");
    printf("<body>");
}

void titulo(char * texto) {
    printf("<h1>%s</h1>", texto);
}

void fim() {
    printf("</body>");
    printf("</html>");
}

int main() {
    inicio();
    aba("Segunda página");
    meio();
    titulo("Usando argumentos");
    fim();
}
