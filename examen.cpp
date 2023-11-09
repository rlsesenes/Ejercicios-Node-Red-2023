#include<stdio.h>
#include<math.h>
int main ()
{

	int i=1;
	float RNO,RCE,RSU,ARNO=0,ARCE=0,ARSU=0,MERSU=50000,MES,PRORCE;
	for (i=1;i<=12;i++)
{
	printf("Dame los valores de RNO\n");
	scanf ("%f",&RNO);
	printf("Dame los valores de RCE \n");
	scanf ("%f",&RCE);
	printf("Dame los valores de  RSU \n");
	scanf ("%f",&RSU);
	ARNO=ARNO+RNO;
	ARCE=ARCE+RCE;
	ARSU=ARSU+RSU;
	if(RSU<MERSU)
	{
	MERSU=RSU;
	MES=i;
	}
	else 
	{
	i=i+1;
	}

}

	PRORCE=ARCE/12;
	printf(" \n PROMEDIO REGION CENTRO %f \n MES CON MENOR LLUVIA REOSUR %f \n REGISTRO DEL MES %f \n ",ARCE,MES,MERSU);
	
	
	if(ARNO>ARCE)
	{
		if(ARNO>ARSU)
		{
		printf("LA REGION CON MAYOR LLUVIA ES LA REGION NORTE");	
		}
		else
		{
		printf("LA REGION CON MAYOR LLUVIA ES LA REGION SUR");	
		}
	}
	else 
	{
		if (ARCE>ARSU)
		{
			printf("LA REGION CON MAYOR LLUVIA ES LA REGION CENTRO");	
		}
		else 
		{
			printf("LA REGION CON MAYOR LLUVIA ES LA REGION SUR");	
		}
	}
return 0;
}	