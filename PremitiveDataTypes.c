////////////////////////////////////////////////////////////////////////////////////
//  Premitive Data Types in c
//  Ex .   char int float double void.
//
/////////////////////////////////////////////////////////////////////////////////////

////  Header File /////////////////
#include<stdio.h>

int main()                      // Entry point function.
{
    // Character 
    char ch ='A';               // initilized value.
    printf("%c\n",ch);
    // integer                  // initilized value.
    int iNo =355;
    printf("%d\n",iNo);

      // Float 
    float fNo =355.5454155;     // initilized value.
    printf("%f\n",fNo);
    // double 
    double dNo =3545.545414455;    // initilized value.
    printf("%lf\n",dNo);

    /// Print addrress of variables.
    printf("Print address of variable\n");
    printf("Address of ch = %d \n", &ch);
    printf("Address of iNo = %d \n", &iNo);
    printf("Address of fNo = %d \n", &fNo);
    printf("Address of dNo = %d \n", &dNo);

    return 0;
}