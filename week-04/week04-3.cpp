///week04-3.cpp
///試各種 for迴圈
#include <stdio.h>
int main(){

    int N=5;
    for(int i=0; i<N; i++){
        printf("%d",i);
    } ///電腦從 0 開始
    printf("\n"); ///跳行

    for(int i=1; i<=N; i++){
        printf("%d",i);
    }///人類從 1 開始
    printf("\n"); ///跳行

    for(int i=N-1; i>=0; i--){
    printf("%d",i);
    }///倒過來的迴圈
}
