////////////////////////////////////////////////////////////////\
//                                                             \/
//       Authore Name : Siva Piragsam.v                        /\
//       Title        : LED 0 to 7 led blinking                \/
//       Date         : 01/09/2019                             /\
///////////////////////////////////////////////////////////////\/
#include<htc.h>
int main()
{
	TRISB=0;
	int a[]={0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01};
	int i,j;
	while(1)
	{
		for(i=7;i>=0;i--)
		{
			PORTB=a[i];
			for(int j=-30000;j<30000;j++);
		}
			PORTB=0x00;
			for(i=-300000;i<300000;i++);	
	}
}