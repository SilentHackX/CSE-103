/*Write a C program to input marks of five subjects Physics, Chemistry, Biology,
Mathematics and Computer. Calculate average marks and then grade according to
following:
Marks >= 90 : Grade A
Marks >=80 : Grade B
Marks >=70 : Grade C
Marks >=60 : Grade D
Marks >=50 : Grade E
Marks <40 : Grade F*/


#include<stdio.h>

int main ()
{

    float physics, chemistry, biology, math, computer;

    printf("Enter marks : ");
    scanf("%f", &physics);

    printf("Enter marks : ");
    scanf("%f", &chemistry);


    printf("Enter marks : ");
    scanf("%f", &biology);


    printf("Enter marks : ");
    scanf("%f", &math);


    printf("Enter marks : ");
    scanf("%f", &computer);

    float avarage = (physics + chemistry + biology + math + computer)/5;

    printf("avarage marks of subject : %.2f\n", avarage);

    if(avarage>=90)
    {
        printf("you passed and grade is A\n ");
    }
     else if(avarage>=80)
        {
             printf("you passed and grade is B\n ");
        }
    else if(avarage>=70)
        {
            printf("you passed and grade is C\n ");
        }

    else if(avarage>=60)
        {
             printf("you passed and grade is D\n ");
        }
    else if(avarage>=50)
        {
             printf("you passed and grade is E\n ");
        }

     else if(avarage<40)
    {
         printf("you passed and grade is F\n ");

    }






    return 0;
}
