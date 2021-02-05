//WAP to find the volume of a tromboloid using 4 functions.
#include <stdio.h>

float input()
{
    float a;
    printf("Enter number: ");
    scanf("%f", &a);

    return a;
}

void output(float vol)
{
    printf("Volume is %f", vol);
}

float volume(float h, float b, float d)
{
    float vol;
    vol = ((h*d*b) + (d/b)) / 3;

    return vol;
}

int main()
{
    float h, b, d, vol;

    h = input();
    b = input();
    d = input();
    vol = volume(h, b, d);
    output(vol);

    return 0;
}