///week12-3c.cpp
///SOLT108_Base_011
#include <stdio.h>
int main(){

	int x1, y1, x2, y2;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

	int ans = (x1-x2)*(y1-y2);
	if(ans<0) ans= -ans;
	printf("%d", ans);
}
