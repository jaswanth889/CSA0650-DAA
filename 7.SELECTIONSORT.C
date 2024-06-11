#include<stdio.h>
#include<conio.h>
void swap(int *e, int *f)
{
    int temp = *e;
    *e = *f;
    *f = temp;
}
void Sort(int a[], int n)
{
    int i,j,m;
    for(i=0;i<n-1;i++)
    {
        m = i;
        for(j=i+1;j<n;j++)
          if (a[j]<a[m])
            m = j;
           if(m!=i)
            swap(&a[m], &a[i]);
    }
		printf("\nSorted Array:");
        for (i=0;i<n;i++){
        	printf("%d ",a[i]);
        }
}
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
	Sort(a,n);
	getch();
	return 0;
}
