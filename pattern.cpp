#include<iostream>
using namespace std;
int main()
{	
	int i,j,a1,a2,a3;
	int i1=49;
	char a[4][7];
	for(i=0;i<4;i++)
	{
		for(j=0;j<7;j++)
		{	a[i][j]=' ';
			a1=i1-1;
			a2=i1-2;
			a3=i1-3;

			if(a1>48)
			{a[i][2]=a1;
			a[i][4]=a1;}
			else
			{a[i][2]=' ';
			a[i][4]=' ';}

			if(a2>48)
			{a[i][1]=a2;
			a[i][5]=a2;}
			else
			{a[i][1]=' ';
			a[i][5]=' ';}
			
			if(a3>48)
			{a[i][0]=a3;
			a[i][6]=a3;}
			else
			{a[i][0]=' ';
			a[i][6]=' ';}

			a[i][3]=i1;
			
				
		}i1++;
	
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<7;j++)
		{		
			cout<<a[i][j]<<"\t";		
		}	
	cout<<"\n";
	}
}
