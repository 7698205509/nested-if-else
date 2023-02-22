#include<stdio.h>
int main(){
	int a,b,c;
	
		printf("value of a: ");
		scanf("%d",&a);
		printf("value of b: ");
		scanf("%d",&b);
		printf("value of c: ");
		scanf("%d",&c);
		
		if(a<b){
			if(a<c){
				printf("A Small");
			}
			else{
				printf("C Small");
			}
		}
		else{
			if(b<c){
				printf("B small");
			}
			else{
				printf("C small");
			}
		}
		
		return 0;
	
	
}
