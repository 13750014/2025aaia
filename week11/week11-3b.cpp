///week11-3b.cpp
///SOIT107_ADVANCE_C_C++
#include<iostream>
using namespace std;

int max_digit(int n){
	int ans = 0;
	while(n>0){
		if(n%10>ans) ans = n%10;
		n = n/10;
	}
	return ans;
}
int main(){
  int n;cin>>n;
  cout<<"["<<max_digit(n)<<"]";
  return 0;
}
/* よC++  main ㄧ计 单基 よ C  main ㄧ计
int main(void){
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}
*/
