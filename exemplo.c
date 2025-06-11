#include <stdio.h>

int main(void) {
  printf( "Content-type: text/html\n\n" );
  printf("<html>");
  printf("<head>");
  printf("<meta charset=\"UTF-8\">");
  printf("<title>Primeira página</title>");
  printf("</head>");
  printf("<body>");
  printf("<h1>Olá mundo!</h1>");
  printf("</body>");
  printf("</html>");

  return 0;
}