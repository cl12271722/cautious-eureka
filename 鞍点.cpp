#include <stdio.h>
main()
{
	int a[5][6]={1,2,3,5,3,2,6,9,8,9,4,3,3,2,6,8,4,5,2,1,3,7,6,8,9,5,6,6,5,2};
	int i,j;
	int t,m,f,k;
	for(i=0;i<5;i++)
	{
		m=a[i][0];
		f=0;
		t=0;
		for(j=0;j<6;j++)
		{
			if(a[i][j]>m)
			{
				m=a[i][j];
				t=j;
			}
		}
		for(k=0;k<5;k++)
		{
			if(a[k][t]<m)
			{
				f=1;
				break;
			}
		}
		if(f==0)
			printf("%d\n",m);
	}
}
