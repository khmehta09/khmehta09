#include <stdio.h>
int cube(int num) 
{
    return num * num * num;
}
int main()
{
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);
    printf("Cube: %d\n",cube(num));
    return 0;
}