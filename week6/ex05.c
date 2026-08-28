#include <stdio.h>

int main(){
    int i,tm,ts;
    struct time{
       int m,s;
    }t[3];
    for(i=0;i<3;i++){
        printf("Time input (m:s): ");
        scanf("%d:%d",&t[i].m,&t[i].s);
    }
    tm = t[0].m + t[1].m + t[2].m;
    ts = tm*60;
    ts = ts + t[0].s + t[1].s + t[2].s;
    printf("Total time elasped: %d second(s)",ts);
    return 0;
}