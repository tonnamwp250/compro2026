#include <stdio.h>
int main(){
    int i;
    float money=0,add,min;
    while (i!=4)
    {
        printf("\n====== ATM MENU ======\n");
        printf("1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n");
        printf("Choose an option: ");
        scanf("%d",&i);
        if(i==1){
            printf("Current Balance : %.2f\n",money);
        }
        if(i==2){
            printf("Enter amount to deposit: ");
            scanf("%f",&add);
            money = money+add;
        }
        if(i==3){
            printf("Enter amount to withdraw: ");
            scanf("%f",&min);
            money = money-min;
            printf("Withdrawal successful.\n");
        }
        else{
            printf("In put not in the option.\n");
        }
    }
    printf("Thank you for using the ATM.\n");
}