# include <iostream>
# include <stdlib.h>
using namespace std;

int main()
{
	int h=0,m=0,s=0;
	cout<<"ENTER TIME IN FORMAT HH:MM:SS: "<<endl;
	cin>>h>>s>>m;
	start:
	for(h;h<24;h++)
	{
		for(m;m<60;m++)
		{
			for(s;s<60;s++)
			{
				system("CLS");
				cout<<h<<":"<<m<<":"<<s;
						
			}s=0;
			
		}m=0;
	}h=0;
	goto start;
	
	
}
