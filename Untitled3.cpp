#include <stdio.h>
int main(){
	int n;

do{	
	printf("Nhap n=");
	scanf("%d",&n);
}while(n<=0);
	int s=0;

	for(int i=1; i <=n; i++){
    if(n%i==0){
    	s=s+i;
	}
} 	
	printf("tong cac uoc so cua n=:%d",s);
}
