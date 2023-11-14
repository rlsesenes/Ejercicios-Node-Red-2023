int main ()
{
	int  w,i,P1,P2,P3,P4,P5, AP1=0,AP2=0,AP3=0,AP4=0,AP5=0,RECAU=0, PRE=0;
	int CLAVE,CANT;

        printf("Dame el valor Para P1\n");
        scanf("%d",&P1);
        printf("Dame el valor Para P2\n");
        scanf("%d",&P2);
        printf("Dame el valor Para P3\n");
        scanf("%d",&P3);
        printf("Dame el valor Para P4\n");
        scanf("%d",&P4);
        printf("Dame el valor Para P5\n");
        scanf("%d",&P5);

    while (CLAVE != -1  &&  CANT != -1)
    {


        printf("Dame el valor de CLAVE\n");
        scanf("%d",&CLAVE);
        printf("Dame el valor de CANT\n");
        scanf("%d",&CANT);
        

        
        switch (CLAVE)
        {
            case 1:
            PRE=P1*CANT;
            AP1=AP1+CANT;
            break;
            case 2:
            PRE=P2*CANT;
            AP2=AP2+CANT;
            break;
            case 3:
            PRE=P3*CANT;
            AP3=AP3+CANT;
            break;
            case 4:
            PRE=P4*CANT;
            AP1=AP4+CANT;
            break;
            case 5:
            PRE=P5*CANT;
            AP5=AP5+CANT;
            break;
            case '\n':
            case'\t':
            case' ' :
            break;
            default:
            printf("Opción incorrecta");
            printf("Di otra opción");
            break;
        }
        printf("La clave es %d\n", CLAVE);
        printf("El CANT es %d\n", CANT);
        printf("La PRE es %d\n", PRE);
        RECAU=RECAU+PRE;
    }	

    
    printf ("CANTIDAD BOLETOS TIPO 1  %d\n",AP1);	
    printf ("CANTIDAD BOLETOS TIPO 2  %d\n",AP2);	
    printf ("CANTIDAD BOLETOS TIPO 3  %d\n",AP3);	
    printf ("CANTIDAD BOLETOS TIPO 4  %d\n",AP4);	
    printf ("RECALIDACION DEL ESTADO  %d\n",RECAU);	
        
            
		
	return 0;
}