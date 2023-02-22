#include<stdio.h>
int main(){
	
	int a,b,c,d,e;
	printf("Value of a; ");
	scanf("%d",&a);
	
	printf("Value of b; ");
	scanf("%d",&b);
	
	printf("Value of c; ");
	scanf("%d",&c);
	
	printf("Value of d; ");
	scanf("%d",&d);
	
	printf("Value of e; ");
	scanf("%d",&e);
	
	if(a<b){
		if(a<c){
			if(a<d){
				if(a<e){
					printf("A min");
				}
				else{
					printf("E min");
				}
			}
			else{
				if(d<e){
					printf("D min");
				}
				else{
					printf("E min");
				}
			}
		}
		else{
			if(c<d){
				if(c<e){
					printf("C min");
				}
				else{
					printf("E min");
				}
			}
			else{
				if(d<e){
					printf("D min");
				}
				else{
					printf("E min");
				}
			}
		}
	}
	else{
		if(b<c){
			if(b<d){
				if(b<e){
					printf("B min");
				}
				else{
					printf("E min");
				}
			}
			else{
				if(d<e){
					printf("D min");
				}
				else{
					printf("E min");
				}
			}
		}
		else{
			if(c<d){
				if(c<e){
					printf("C min");
				}
				else{
					printf("E min");
				}
			}
			else{
				if(d<e){
					printf("d min");
				}
				else{
					printf("E min");
				}
			}
			
		}
	}
	return 0;
}
