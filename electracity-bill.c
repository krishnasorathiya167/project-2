#include<stdio.h>

main()
{
	int unit , e_bill , t_bill , surcharge;
	 printf("Enter Your Unit = ");
	 scanf("%d",&unit);
	 
	 if(unit<=50)
	 {
	 	e_bill = 50 * 0.50;
	 }
	 else if(unit<=150)
	 {
	 	e_bill = (unit-50) * 0.75 + 25 ;
	 }
	 else if(unit<=250)
	 {
	 	e_bill = (unit-150) * 1.20 + 100 ;
	 }
	 else
	 {
	 	e_bill = (unit-250) * 1.50 + 220 ;
	 }


	printf("Electricity Bill = %d\n",e_bill);
	surcharge = e_bill * 20/100;
	printf("Surcharge in Bill = %d\n",surcharge);
	t_bill = e_bill + surcharge;
	printf("Total electricity Bill = %d",t_bill);
	
	
}