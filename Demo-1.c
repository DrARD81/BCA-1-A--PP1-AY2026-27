//Enter 10 elements in array and display count of total zero,positive and negative values.

#include<stdio.h>
#include<conio.h>
void main()
{

    int x[5],y[5],i;




    for(i=0;i<5;i++)
    {
        printf("\n Enter value %d : ",i+1);
        scanf("%d",&x[i]);

    }

    for(i=0;i<5;i++)
    {
        y[i] = x[i];
    }


    for(i=0;i<5;i++)
    {
            printf("\n %d",y[i]);

    }


    /*
    printf("\n Enter the first Number : ");
    scanf("%d",&x);

    printf("\n Enter the Second Number : ");
    scanf("%d",&y);

    printf("\n Enter the Third Number : ");
    scanf("%d",&z);

    printf("\n Value of x is : %d",x);
    printf("\n Value of y is : %d",y);
    printf("\n Value of z is : %d",z);
*/

}
