///week06-1.cpp
///UVA11461: Square Numbers
#include <stdio.h>
#include <math.h>
int main(){

	int a, b;
	while(1){
		scanf("%d %d", &a, &b);
		if(a==0 &&b==0) break;
		int  aa = sqrt(a), bb=sqrt(b);
		int ans=0;
		for(int i=aa; i<=bb; i++){
			if(a<=i*i && i*i<=b) ans++;
		}
		printf("%d\n", ans);
	}
}
