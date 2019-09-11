#include <stdio.h>
#include <stdlib.h>

/* how float and integer works in c*/
/*int main()
{
    int a, b, c;
    float divide;
    printf("take any number of a, b, c");
    scanf("%d %d %d", &a, &b, &c);
    divide = (a+b+c)/10;
    printf("the value of divide is %f", divide);
    return 0;

}*/
/* check the number for negative and positive*/
/*int main()
{
    int a;
    printf("take any number for constant a\n");// \n creates new lines
    scanf("%d", &a);
    if(a<0)
    printf("the number you entered is negative");// it is not necessary to use curely bracket in control statement
    else
    {
      printf("the number you entered is positive");
    }

      return 0;
}*/
/*starting of the loop*/
/*int main()
{
    int i=0;
    while(i<=10)
    {
        printf("it will print 10 times\n");
         ++i;
    }

    return 0;
}*/

/*int main()
{
    int i=1;
    while(i<=5)
    {
        printf("sandeep\t");
        i++;
    }
    return 0;
}
*/

/*condition for for loop*/
/*int main()
{
    int i; // declaration of variable i
    for(i=0; i<=6 ; i++)
    {
        printf("sandeep\t");

    }
    return 0;

}*/


/* break in loop*/
/*int main()
{
    int i;
    printf("take any value of i\n");
    scanf("%d", &i);
    for(i;i<=20;i++)
    {
        printf("sandy\t");
        if(i==10)
        continue;
    }
    return 0;

}*/
/* a simple program for switch */


/*int main()
{
    int a, b, sum, multiply, choice;
    printf("press1: for sum\n");// for user information about the operation to be carried out
    printf("press2: for multiply\n");
    printf("choose any number you like to operate");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        printf("take the number a and b \n");
        scanf("%d %d", &a, &b);
        sum = a+b;
        printf("the value of sum is %d", sum);
        break;

    case 2:
        printf("take the value a and b\n");
        scanf("%d %d", &a, &b);
        multiply = a * b;
        printf("the value of multiply is %d", multiply);
        break;


    }
    return 0;

}*/
/* accessing array through user input*/
/*
int main()
{
    int array[8];
    int i;
    printf("take the value for array\n");
    for(i=0 ; i<5 ; i++)
    {
        scanf("%d", &array[i]);

    }
    for(i=0 ; i<5 ; i++)
    {
        printf("%d", array[i]);
    }

    return 0;

}
*/
/* lets try to access through while loop in an array*/
/*
int main()
{
    char mero_name[] = { 'S', 'A', 'N', 'D', 'Y'};
    int i = 0;
    // try for while loop
    while(i < 5)
    {
    printf("%c", mero_name[i]);
    i++;
    }
    return 0;
}*/
/* try to use number from user*/
/*
int main()
{
    int i,j, name[2][3];// size of array with integer i and j is declared
    printf("take the value in the given form\n");
    for(i = 0; i < 2 ; i++)// loop for user to take te value
    {
        for(j = 0; j < 3 ; j++)
        {
            scanf("%d", &name[i][j]);
        }
    }
    printf("the number you enterd in matrix form is:\n");// it will print the number in matrix form

    for(i = 0; i < 2 ; i++)
    {
       for(j = 0; j < 3 ; j++)
       {
            printf("%d\t", name[i][j]);
       }
       printf("\n");
    }

    return 0;

}
*/

/* use functiion with argument and no return type*/

/*void check(int); // funtion declaration(it is global decaration)
int main()
{
    int a;
    printf("take any value which is to check");
    scanf("%d", &a);
    check(a);// call the function
    return 0;
}
void check(int x)
{
    if(x%2==0)
        printf("the number is even");
    else
        printf("the number is odd");
}
*/

/* passing of array 1d in function with user input*/
/*
void free1(int );
int main()
{
    int name[5], i;// size of array declaration
    printf("take five number\n");
    for(i=0 ; i<5 ;i++)
        scanf("%d", &name[i]);
    for(i=0 ; i<5 ;i++)
        free1(name[i]);
    return 0;
}
void free1(int x)
{
    printf("%d\t", x);
}
*/

/* use function to calculate simple interest passing three arguments*/
/*
void simple(int, int, int);
int main()
{
    int P, T, R;
    printf("take the value P T R\n");
    scanf("%d %d %d", &P, &T, &R);
    simple(P,T,R);
    return 0;
}
void simple(int x, int y, int z)
{
    int SI;
    SI = (x *y *z)/100;
    printf("%d", SI);

}
*/

/* recursive function for calculating factorization*/
/*
int factor(int);
int main()
{
    int a, b;
    printf("take any value for factorization");
    scanf("%d", &a);
    b = factor(a);
    printf("the factor is :%d", b);
}
int factor(int x)
{
    int fact;
    if(x==0)
        return 1;
    else
    fact = x * factor(x-1);
    return fact;
}
*/

