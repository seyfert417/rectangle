#include <stdio.h>

/* 
*Autor: Andrii Khaustovych
* 02.10.2026
*RECTANGLE PERIMETER AND AREA CALCULATOR
*/

int main()
{
    float a, b, perimeter, area;
    int is_rectangle, is_square;
   
    printf("RECTANGLE PERIMETER AND AREA CALCULATOR\n");
    printf("========================================\n\n");
    printf("Enter side a: ");
    if (scanf("%f", &a) != 1 || a <= 0) 
{
        printf("Error: Input must be a positive number!\n");
        return 1; 
}

    printf("Enter side b: ");
    if (scanf("%f", &b) != 1 || b <= 0) 
{
        printf("Error: Input must be a positive number!\n");
        return 1;
}
    perimetr = 2 * (a + b);
    area = a * b;

   printf("Perimeter: %.2f\n", perimeter);
   printf("Area: %.2f\n", area);
   if (a == b)
{
    printf("The quadrilateral is a square.\n");
}
else
{
    printf("The quadrilateral is a rectangle.\n");
}
return 0;
}

