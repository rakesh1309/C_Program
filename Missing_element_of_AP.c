#include<stdio.h>
#include<stdlib.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--){
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
			}

	int m= (a[n-1]-a[0])/n;
	
	for(i=0;i<n;i++)
	{
		if(a[i+1]-a[i]==m)
		continue;
		else
			printf("%d\n",a[i]+m);
			break;
	}
}
}
