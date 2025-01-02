/*Design a structure named ”Car” to store details like car ID, model, and rental rate per day. Write a
C program to input data for three cars, calculate the total rental cost for a specified number of
days, and display the results.*/




#include<stdio.h>

typedef struct
{

    int carId;
    char model[100];
    float RentalRatePerDay;

} Car;
float CalculateRentalCost(Car car, int days)
{

    return car.RentalRatePerDay * days;
}

int main ()
{

    Car cars[3];

    int rentaldays;


    for ( int i = 0 ; i < 3; i++) {
    printf("input data for Cars : \n", i + 1 );
    printf("carId : ");
    scanf("%d", &cars[i].carId);
    printf(" Car model : ");
    scanf("%s", &cars[i].model);
    printf("Rental Rate per Day : BDT");
    scanf("%f", &cars[i].RentalRatePerDay);
    }


    printf("input the number of Rental day : ");
    scanf("%d", &rentaldays);


    for( int i = 0; i < 3 ; i++)
   printf(" Display Total Rental Cost for Car %d (%s): %.2f BDT\n",cars[i].carId, cars[i].model, CalculateRentalCost(cars[i], rentaldays));

    return 0;
}
