#include <stdio.h>
void l_flush (FILE *in)
{
  int ch;
  do
    ch = fgetc ( in );
  while ( ch != EOF && ch != '\n' );
  clearerr ( in );
}

void l_pause (void)
{
  printf ( "Presioná [Enter] para continuar . . .\n\n" );
  l_flush( stdin );
  fflush ( stdout );
  getchar();
}
