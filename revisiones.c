#include<stdio.h>
#include<math.h>
int main ()
{
int ARSU=0,ARNO=0,MERSU=50000,ARCE=0;
int i=1,MES;
float RNO,RCE,RSU,PRONCE;
for(i=1;i<=12;i++)
{
if(i<=12) // Aquí faltaba un paréntesis de cierre
{
printf("ingresa los valor de RNO\n");
scanf("%f",&RNO);
printf("ingresa los valor de RCE\n");
scanf("%f",&RCE);
printf("ingresa los valores de RSU\n");
scanf("%f",&RSU);


ARNO=ARNO+RNO;
ARCE=ARCE+RCE;
ARSU=ARSU+RSU;
}
if(RSU<MERSU)
{
	MERSU=RSU;
	MES=i; // Aquí se debe asignar el valor de i a MES, no 1
	// i=i+1; // Esta línea no es necesaria y puede causar errores
}
}
// Este bloque de código se debe mover fuera del bucle for y usar un if para comprobar que i es igual a 13
if(i==13) // Esto significa que el bucle ha terminado
{
PRONCE=ARCE/12;
printf("promedio region centro: %f\n",PRONCE); // Aquí faltaba el especificador de formato %f
printf("mes con menor lluvia reo.sur: %d\n",MES); // Aquí faltaba el especificador de formato %d
printf("registro del mes: %f\n",MERSU); // Aquí faltaba el especificador de formato %f
}

if(ARNO>ARCE)
if(ARNO>ARSU)
{
printf("la region con menor lluvia es la region norte");	
}
else
{
printf("la region con mayor lluvia es la region sur");
}
if(ARCE>ARSU)
{
printf("la region con mayor lluvia es la region centro");
}
else 
{
printf("la region con mayor lluvia es la region sur");
}
return 0;
}