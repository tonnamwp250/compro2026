#include <stdio.h>
#include <math.h>
int main(){
    float dx,dy;
    struct line{
       float u_x,u_y,v_x,v_y; 
    }l;
    printf("u_x: ");
    scanf("%f",&l.u_x);
    printf("u_y: ");
    scanf("%f",&l.u_y);

    printf("v_x: ");
    scanf("%f",&l.v_x);
    printf("v_y: ");
    scanf("%f",&l.v_y);
    dx = l.u_x+l.v_x;
    dy = l.u_y+l.v_y;
    printf("Resultant vector is equvalence to %.1fi + %.1fj",dx,dy);
    return 0;
}