
#include<stdio.h>

typedef struct
{
    char name[100];
    int age;
    float totalmark;
} Student;

int main()
{
    Student student1,student2;

    printf("input data student1 : \n");
    printf("Name : ");
    scanf("%s", &student1.name);
    printf("Age : ");
    scanf("%d", &student1.age);
    printf("Total Mark : ");
    scanf("%f", &student1.totalmark);


    printf("input data student2 : \n");
    printf("Name : ");
    scanf("%s", &student2.name);
    printf("Age : ");
    scanf("%d", &student2.age);
    printf("Total Mark : ");
    scanf("%f", &student2.totalmark);


    printf("Display student1 deatils : \n");
    printf("Name : %s\n", student1.name);
    printf("Age : %d\n", student1.age);
    printf("Total Mark : %.2f\n", student1.totalmark);


    printf("Display student2 deatils : \n");
    printf("Name : %s\n", student2.name);
    printf("Age : %d\n", student2.age);
    printf("Total Mark : %.2f\n", student2.totalmark);

 float avg = (student1.totalmark + student2.totalmark)/2;

 printf("the average of total marks : %.2f", avg);

 return 0;


}

