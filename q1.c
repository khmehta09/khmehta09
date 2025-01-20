#include <stdio.h>
int main() 
{
    int angle1, angle2, angle3;

    printf("Enter two angles of the triangle: ");
    scanf("%d %d", &angle1, &angle2);

    angle3 = 180 - (angle1 + angle2);

    printf("The third angle is: %d\n",angle3);

    return 0;
}