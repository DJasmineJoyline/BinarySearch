#include<stdio.h>
int BinarySearch(int l,int h,int *a,int x)
{
    int m;
    if(l>h)
    return -1;
    else
    {
        m=(l+h)/2;
        if(a[m]==x)
        return m;
        else if(a[m]>x)
        {
            return BinarySearch(l,m-1,a,x);
        }
        else
        return BinarySearch(m+1,h,a,x);
    }
}
int main()
{
    int num,a[100],key,i;
    printf("Enter the number of elements :\n");
    scanf("%d",&num);
    printf("Enter the elements :\n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
	printf("Enter the element to be searched :\n");
	scanf("%d",&key);
	int l=0,h=num-1;
	int r=BinarySearch(l,h,a,key);
	if(r==-1)
	printf("The element %d is not present in the array",key);
	else
	printf("The element %d is in position %d",key,r);
	
	
	return 0;
}
