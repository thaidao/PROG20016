#include "project.h"

int main(void)
{
	CyGlobalIntEnable; //Enable global interrupt
	
	for(;;)
	{
		LED_Write(1);
		CyDelay(1000);
		LED_Write(0);
		CyDelay(1000);
	}
}