// Accept radius from the user and write a program having menu with the following options and corresponding actions

#include <stdio.h>
int main()

{
    int ch;
    float radius, area, ci, volume;

    printf("1.Area of circle\n 2.circumference of circle\n 3.Volume of Sphere\n");
    printf("Enter your choice :");
    scanf("%d", &ch);
    
    switch (ch)
    {
    case 1:
        printf("\n Enter the radius of circle:");
        scanf("%f", &radius);
        area = 3.14 * radius * radius;
        printf("\n Area of circle :");
        break;

    case 2:
        printf("\nEnter the radius of Circle : ");
        scanf("%f", &radius);
        ci = 2 * 3.14 * radius;
        printf("\nCircumference : %f ", ci);
        break;

    case 3:
        printf("Enter radius of the sphere : \n");
        scanf("%f", &radius);
        volume = (4.0 / 3) * (3.14) * radius * radius * radius;
        printf("\n Volume of sphere is : %f", volume);
        break;

    default:
        printf("\n Invalid entry");
    }
}