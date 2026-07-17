#include <stdio.h>
int main(){
    int minute=0,hour,time;
    printf("Enter total minutes : ");
    scanf("%d",&time);
    hour = time / 60;
    minute = time % 60;
    printf("%d minutes is %d hour(s) %d minute(s)\n",time,hour,minute);
   
    return 0;
}