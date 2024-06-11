#include<stdio.h>
#include<conio.h>
int main(){
	int i,n,k=0;
	printf("R.JASWANTH, Reg.No - 192211602");
	printf("\nEnter the Number:");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0){
			k++;
	}
		}
	if(k==0){
	printf("%d is a Prime Number",n);
	}
	else{
	printf("%d is Not a Prime Number",n);	
	}
	getch();
	return 0;
}
