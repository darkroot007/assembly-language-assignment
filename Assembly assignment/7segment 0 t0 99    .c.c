//////////////////////////////////////////////////////////\
//                                                       \/
//       Authore Name : Siva Piragsam.v                  /\
//       Title        : 7segment LED 0 to 99 continue    \/
//       Date         : 01/09/2019                       /\
/////////////////////////////////////////////////////////\/
#include<htc.h>
int main()
{
	TRISB=0;
	TRISC=0;
	TRISD=0;
	int a[]={0xfc,0x60,0xda,0xf2,0x66,0xb6,0xbe,0xe0,0xfe,0xe6};	//here declare 7segment led address
	int i,j,k;
	for(i=0;i<10;i++)
	{
		PORTB=a[i];
		for(j=0;j<10;j++)
		{
			PORTC=a[j];
			for(k=0;k<10;k++)
			{
				PORTD=a[k];
				for(int c=-20000;c<20000;c++);
			}
		}
	}
}