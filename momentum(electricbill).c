#include<stdio.h>

main()
{
	int elc_bill,unit,total,sr;
	
	printf("enter unit=");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
	 elc_bill=unit*0.50;
	 printf("elc bill=%d\n",elc_bill);	
	}
	else if(unit<=150)
	{
	 elc_bill=(unit-50)*0.75+25;
	 printf("elc-bill=%d\n",elc_bill);
	}
	else if(unit<=250)
	{
		elc_bill=(unit-150)*1.20+100;
		printf("elc_bill=%d\n",elc_bill);
	}
    else if (unit>250)
    {
      elc_bill=(unit-250)*1.50+150;
	  printf("elc_bill=%d\n",sr);	
	}
    
    {
   sr=elc_bill*0.2;
   
   total=elc_bill+sr;
   printf("elc-bill+surfcharge(20percent)=%d",total);
   }
	
	
}
