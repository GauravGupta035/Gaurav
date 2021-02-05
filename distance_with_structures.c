//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include <math.h>

struct coordinates
{
    float x, y;
};
typedef struct coordinates Point;

Point input()
{
    Point p;
    printf("Enter x coordinate: ");
    scanf("%f", &p.x);
    printf("Enter y coordinate: ");
    scanf("%f", &p.y);

    return p;
}

void output(float dist)
{
    printf("Distance between the 2 points is %f", dist);
}

float distanceCalc(Point A, Point B)
{
    float distance;
    distance = sqrt((pow(A.x - B.x, 2)) + (pow(A.y - B.y, 2)));

    return distance;
}

int main()
{
    Point A, B;
    float dist;

    A = input();
    B = input();
    dist = distanceCalc(A, B);
    output(dist);

    return 0;
}