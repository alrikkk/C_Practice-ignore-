#include <stdio.h>
int main() {
    int sal,cred;
    printf("Enter your salary: ");
    scanf("%d",&sal);
    printf("Enter your credit score: ");
    scanf("%d",&cred);
    if(sal>=30000 && cred>=700)
        printf("Eligible.\n");
    else
        printf("Not eligible.\n");
    return 0;
}