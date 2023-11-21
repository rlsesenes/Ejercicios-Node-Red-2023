#include <stdio.h>
/* Archivos y caracteres.
El programa escribe caracteres en un archivo. */
int main()
{
   char p1[10];
    FILE *ar;
    ar=fopen("arc.txt", "w"); /* Se abre el archivo arc.txt para escritura. */
        if (ar!= NULL)
        {
            while (p1!= "\n")
            {
            /* Se escriben caracteres en el archivo mientras no se detecte el caracter
➥que indica el fin de la línea. */
            //printf("escribe la cadena");
            fscanf(" %s", p1); /* Se cierra el archivo. */
            }
        }

        else
        {
        printf("No se puede abrir el archivo");
        }
return 0; 
}