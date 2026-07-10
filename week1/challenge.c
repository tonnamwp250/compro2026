#include <stdio.h>
int main(){
    printf("+----------------+--------+--------+\n");
    printf("| %s %18s %1s\n","Name","| Score1","| Score2 |");
    printf("+----------------+--------+--------+\n");
    printf("| %s %10s %6s %s %6s %s\n","Alice","|","85","|","90","|");
    printf("| %s %12s %6s %s %6s %s\n","Bob","|","78","|","82","|");
    printf("| %s %8s %6s %s %6s %s\n","Charlie","|","92","|","88","|");
    printf("+----------------+--------+--------+\n");
    return 0;
}