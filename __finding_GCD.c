//Writing the gcd of a number
#include <stdio.h>
int main(){
    int num1, num2, min, k = 2, hcf = 1;
    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2) min = num2;
    else min = num1;
    while (k <= min){
        if (num1 % k == 0 && num2 % k == 0){
            hcf = k;
        }
        k += 1;
    }
    printf("Using Trial and Error method...\n\n");
    printf("The H.C.F of %d and %d is %d", num1, num2, hcf);
    
    printf("\n\nNow...\nUSING EUCLID'S ALGORITHM!\n\n");
    int n1 = num1, n2 = num2;
    while (num2 != 0){
        int r = num1 % num2;
        num1 = num2;
        num2 = r;    
    }
    printf("The H.C.F of %d and %d is %d\n", n1, n2, num1);   
}