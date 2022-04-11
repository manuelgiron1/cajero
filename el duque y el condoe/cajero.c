#include<stdio.h>
int main(void)
{
    int monto;
    int billetes1 = 0;
    int billetes5 = 0;
    int billetes10 = 0;
    int billetes20 = 0;
    int billetes50 = 0;
    int billetes100 = 0;

    printf("cuanto retiramos hoy fella? ");
    scanf("%d",&monto);
    
    if(monto<20){
        printf("mate ask for more ");
        return 1;
    }
    else if( monto>5000){
        printf("fella i dont have much");
        return 2;
    }
    printf("%d\n",monto);

    int billete100 = 100;
    while (monto>=100)
    {
        monto= monto - billete100;
        billetes100++;
    }
    printf("Se usaron %d billetes de 100\n", billetes100);
    
    int billete50 = 50;
    while (monto>=50)
    {
        monto= monto - billete50;
        billetes50++;
    }
    printf("Se usaron %d billetes de 50\n", billetes50);
    
    int billete20 = 20;
    while (monto>=20)
    {
        monto= monto - billete20;
        billetes20++;
    }
    printf("Se usaron %d billetes de 20\n", billetes20);
    
    int billete10 = 10;
    while (monto>=10)
    {
        monto= monto - billete10;
        billetes10++;
    }
    printf("Se usaron %d billetes de 10\n", billetes10);
    
    int billete5 = 5;
    while (monto>=5)
    {   
        monto= monto - billete5;
        billetes5++;
    }  
    printf("Se usaron %d billetes de 5\n", billetes5);
    
    int billete1 = 1;
    while (monto>=1)
    {
        monto= monto - billete1;
        billetes1++;
    }
    printf("Se usaron %d billetes de 1\n", billetes1);
}