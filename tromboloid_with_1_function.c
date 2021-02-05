//Write a program to find the volume of a tromboloid using one function
#include <stdio.h>

float tromboidalVol(float h, float b, float d)
{
    float volume;
    volume = ((h*d*b) + (d/b)) / 3;

    return volume;
}

int main()
{
    float h, b, d, vol;

    printf("Enter the value of h: ");
    scanf("%f", &h);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of d: ");
    scanf("%f", &d);

    vol = tromboidalVol(h ,b, d);

    printf("The volume of the tromboloid is %f", vol);
    
    return 0;
}