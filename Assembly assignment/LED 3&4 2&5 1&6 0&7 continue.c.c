////////////////////////////////////////////////////////////////\
//                                                             \/
//       Authore Name : Siva Piragsam.v                        /\
//       Title        : LED 3&4 2&5 1&6 0&7 continue           \/
//       Date         : 01/09/2019                             /\
///////////////////////////////////////////////////////////////\/
#include<htc.h>
int main()
{
	TRISB=0;
	int a[]={0xFF,0xE7,0xA3,0x81};
	int i;
	while(1)
	{
			for(i=0;i<4;i++)
			{
			PORTB=a[i];
			for(int j=-30000;j<30000;j++);
			}
			PORTB=0;
			for(i=-30000;i<30000;i++);
	}	
}