#include<stdio.h>
main()
{
	int s,i, flag=0;
	int a[5]={2,4,5,6,7};
	printf("enter the number :");
	scanf("%d",&s);
	int f=0;
	int l=4;
	int mid = (f+l)/2;
	 while(f<=l)
	 {
	 	if(a[mid]==s)
	 	{
	 		printf("value present at location %d",mid+1);
	 		flag=1;
	 			break;	
	    }
	    else if(a[mid]<s)
	    {
	          f=mid+1;
    	}
		else
		{
			l=mid-1;
		}
		mid=(f+l)/2;
	 }
	 if(flag==0)
	  printf("number not exist");
	
}
