#include<stdio.h>

int checkPowerOfTwo(int num) {
    int oneCounter = 0;
    while(num > 0) {
        int temp = num % 2;
        if (temp == 1 || num == 1) {
            oneCounter++;
            if (oneCounter > 1){
                return -1;
            }
        }
        num = num / 2;
    }
    return 1;
}


int main() {
    int num;
    printf("Enter a decimal number\n");
    scanf("%d", &num);
    int returnValue = checkPowerOfTwo(num);
    if (returnValue == -1) {
        printf("Number is not power of two");
    } else if (returnValue == 1) {
        printf("power of two");
    }
    return 0;
}

