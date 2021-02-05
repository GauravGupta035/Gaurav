//WAP to find the distance between two point using 4 functions.
#include <stdio.h>
#include <math.h>

float input()
{
    float a;
    printf("Enter coordinate: ");
    scanf("%f", &a);

    return a;
}

void output(float dist)
{
    printf("The distance between the 2 points is: %f", dist);
}

float distanceCalc(float x1, float y1, float x2, float y2)
{
    float distance;
    distance = sqrt((pow(x2 - x1, 2)) + (pow(y2 - y1, 2)));

    return distance;
}

int main()
{
    float x1, y1, x2, y2, dist;

    x1 = input();
    y1 = input();
    x2 = input();
    y2 = input();

    dist = distanceCalc(x1, y1, x2, y2);
    output(dist);

    return 0;
}