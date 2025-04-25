///week10-2.cpp 要教大家「剝皮法」
#include <stdio.h>
int main(){
    printf("請輸入1個整數:");
    int n;
    scanf("%d", &n); ///ex.輸入 397
    ///printf("個位數是 %d\n", n%10);
    ///printf("十位數是%d\n", n/10 %10 );
    ///printf("百位數是%d\n", n/100 %10);
    while(n>0){ ///如果還有剩下 n 就繼續做
        printf("數字 %d 剝皮撥出；%d\n", n, n%10); ///剝皮
        n = n / 10; ///數字變小了 變1/10
    }
}
