#include <stdio.h>
#define PHI 3.14159

int main() {

//    SOAL NOMOR 1
/* Write a program that inputs two different integers from the
keyboard, then prints the sum and the average of these numbers. */

    float num1, num2, sum, average;

//    Get Number 1
    printf("Number 1: ");
    scanf("%f", &num1);

//    Get Number 2
    printf("Number 2: ");
    scanf("%f", &num2);

//    Get sum with number 1 + number 2
    sum = num1 + num2;
//    Get average with sum divided by 2
    average = sum / 2;

    printf("Sum = %.0f, \n", sum);
    printf("Average = %.1f", average);



//    SOAL NOMOR 2
/* Write a program that reads in the radius of a circle and prints the
circle’s diameter, circumference, and area. Use the constant value
3.14159 for π. */

    float radius, diameter, circumference, area;

    printf("Radius: ");
    scanf("%f", &radius);

    diameter = 2 * radius;

    circumference = 2 * PHI * radius;
    area = PHI * radius * radius;

    printf("Radius = %.0f \n", diameter);
    printf("%f \n", circumference);
    printf("%f", area);




    return 0;
}

