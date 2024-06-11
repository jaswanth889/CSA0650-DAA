#include<stdio.h>
#include<conio.h>
int main(){
	int i,n,a[100],k;
	printf("R.JASWANTH, Reg.No - 192211602");
	printf("\nEnter the Number:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	printf("Elements in the Array were:");
	for(i=0;i<n;i++){
	printf("%d ",a[i]);
	}
	k = a[0];
	for(i=0;i<n;i++){
		if(k<a[i]){
			k = a[i];
			a[i] = k;
		}
	}
	printf("\nLargest Element in the Array: %d",k);
	getch();
	return 0;
}
