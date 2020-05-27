#include<stdio.h>
#include<conio.h>
int tong(int n){
	if(n==1) return 1;
	return tong(n-1)+n;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=n;i>=0;i--){
		if(tong(i)<n) {
		printf("%d",i);break;
	}}
}
