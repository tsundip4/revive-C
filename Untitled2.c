#include<stdio.h>
#include<stdlib.h>
/* calculation of average using array*/
/*
int main()
{
    int arr[5], i, average, sum;
    sum = 0;
    printf("take any five value");
    for(i=0 ; i<5 ;i++)
        scanf("%d", &arr[i]);
    for(i =0 ; i <5 ; i++)
        sum = sum + arr[i];
    average = sum/5;
    printf("the average is: %d", average);
    return 0;

}
*/
/*
int main()
{
    char name[20];// size of character array    p
    printf("enter your name ");// user input for name
    scanf("%s", &name[0]);// %s shows string will be copied to the address of name array on first memory block
    printf("%s", &name[0]);// display the name
    return 0;// program is well executed
}
*/

/*
int main()
{
    char name[20];
    printf("plese enter your name");
    gets(name);// gets is an easy way to scan the string as it doesnot takes the vaue after space enter
    puts(name);// it will display the name directly
    printf("your name is %s\n", name);
    return 0;
}
*/
/* calculation of string length */
/*
int main()
{
    char s[10], b;
    printf("enter your first name");
    gets(s);
    b = strlen(s);// it will calculate length of string
    printf("the length of is %d", b);
    return 0;

}
/*string comparison*/

/*int main()
{
    char s1[10], s2[10];// two string are declared whose size is 10
    int b;
    printf("take any two names");// take number from
    scanf("%s %s", s1, s2);
    b = strcmp(s1, s2);// this will compare 00
    if(b==0)
        printf("names are same\n");
    else
        printf("it is completely different");
    return 0;

}
*/
/* string concatenate */
/*
int main()
{
     char s1[10], s2[10];
     printf("take any two names");
     scanf("%s %s", s1, s2);
     strcat(s1, s2);
     printf(" the new added string  is  : %s", s1);// it means s2 is copied in s1
     return 0;


}
*/

/* string copy */
/*
int main()
{
    char name[10], copy_name[10];
    printf("take any two names\n");// call for user to take any names
    scanf("%s %s", name, copy_name);// it will place the entered name into given address
    strcpy(name, copy_name);// it will copy the copy_name into name
    printf("the new string name becomes after copied is %s", name);// it will print the name after copy_name is copied into name
    return 0;
}
*/
/*
int main()
{
    char s1[10];
    printf("take any word for s1");
    scanf("%s", s1);
    strcat(s1, "kalakar");
    printf("%s", s1);
    return 0;
}

*/
/* string reverse */
/*

int main()
{
   char name[10];
   printf("take your name ");
   scanf("%s", name);
   strrev(name);
   printf("%s", name);
   return 0;

}
*/

