#include <stdio.h>
#include <math.h>
int main(){
    float d,dx,dy;
    struct line{
       float x1,x2,y1,y2; 
    }l;
    printf("x1: ");
    scanf("%f",&l.x1);
    printf("x2: ");
    scanf("%f",&l.x2);

    printf("y1: ");
    scanf("%f",&l.y1);
    printf("y2: ");
    scanf("%f",&l.y2);

    dx = l.x2-l.x1;
    dy = l.y2-l.y2;
    d = sqrt(pow(dx,2) + pow(dy,2));
    printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)\n",l.x1,l.y1,l.x2,l.y2,d);
    return 0;
}