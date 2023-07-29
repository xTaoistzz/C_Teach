#include<stdio.h>
int main(){
	int buffet_beef,buffet_pork,steak,braised_beef,meatball,stewed_tendon,scrap_beef;
	int	i=0,guest=0,t_guest=0,table=0,amount=0;
	//Market variable
	int t_beef=0,t_pork=0,t_steak=0,t_braised=0,t_ball=0,t_tendon=0,t_scrap=0;
	float payment=0,income=0;
	char menu,exit;
	do{
		i++;
		printf("\nCustomer Set#%d\n",i);
		printf("Enter amount of guest : ");
		scanf("%d",&guest);
		t_guest+=guest;
		buffet_beef=0,buffet_pork=0,
		steak=0,braised_beef=0,meatball=0,stewed_tendon=0,scrap_beef=0,payment=0;
		do{
			printf("\nMENU : \n");
			printf("1. Beef Buffet Shabu		399	THB/guest	%d Guest		%.2f THB\n",buffet_beef,buffet_beef*399.00);
			printf("2. Pork Buffet Shabu		299	THB/guest	%d Guest		%.2f THB\n",buffet_pork,buffet_pork*299.00);
			printf("3. Steak			1500	THB/Kilogram	%d Hectograms	%.2f THB\n",steak,steak*150.00);
			printf("4. Braised Beef			150	THB/Set		%d Set		%.2f THB\n",braised_beef,braised_beef*150.00);
			printf("5. Meatball			120	THB/Pack	%d Pack		%.2f THB\n",meatball,meatball*120.00);
			printf("6. Stewed Tendon		200	THB/Set		%d Set		%.2f THB\n",stewed_tendon,stewed_tendon*200.00);
			printf("7. Scrap Beef			180	THB/Set		%d Set		%.2f THB\n",scrap_beef,scrap_beef*180.00);
			printf("N. Calculate Payment\n");
			printf("Select Menu : ");
			fflush(stdin);
			scanf("%c",&menu);
			if(menu=='1'||menu=='2'){
				printf("\nTable : %d\n",table+1);
				if(menu=='1')
					buffet_beef=guest;
				else
					buffet_pork=guest;
			}
			else{				
				if(menu=='N'||menu=='n'){
					printf("\nCalculate Payment...\n");
					break;
				}
				printf("Enter Amount of Set/Pack(If select steak, fill up with HECTOGRAM Unit) : ");
				scanf("%d",&amount);
				if(menu=='3')
					steak+=amount;
				else if(menu=='4')
					braised_beef+=amount;
				else if(menu=='5')
					meatball+=amount;
				else if(menu=='6')
					stewed_tendon+=amount;	
				else if(menu=='7')
					scrap_beef+=amount;
				else
					printf("Try, again");
			}
		}while(menu!='n'&&menu!='N');
		payment = ((buffet_beef*399.00)+(buffet_pork*299.00)+(steak*150.00)+(braised_beef*150.00)+(meatball*120.00)+(stewed_tendon*200.00)+(scrap_beef*180.00));
		t_beef+=buffet_beef;
		t_pork+=buffet_pork;
		t_steak+=steak;
		t_braised+=braised_beef;
		t_ball+=meatball;
		t_tendon+=stewed_tendon;
		t_scrap+=scrap_beef;
		if(buffet_beef!=0||buffet_pork!=0)
			table++;
		printf("\nTotal Payment : %.2f THB\n",payment);
		printf("\nPress 'N' to Exit and Calculated Income : ");
		fflush(stdin);
		scanf("%c",&exit);
	}while(exit!='n'&&exit!='N');
	income = ((t_beef*399.00)+(t_pork*299.00)+(t_steak*150.00)+(t_braised*150.00)+(t_ball*120.00)+(t_tendon*200.00)+(t_scrap*180.00));
	printf("\n\nTotal Income : \n");
	printf("Total Guest : %d\n",t_guest);
	printf("Total Customer Set : %d\n",i);
	printf("Total Table : %d\n",table);
	printf("1. Beef Buffet Shabu		399	THB/guest	%d Guest		%.2f THB\n",t_beef,t_beef*399.00);
	printf("2. Pork Buffet Shabu		299	THB/guest	%d Guest		%.2f THB\n",t_pork,t_pork*299.00);
	printf("3. Steak			1500	THB/Kilogram	%d Hectograms	%.2f THB\n",t_steak,t_steak*150.00);
	printf("4. Braised Beef			150	THB/Set		%d Set		%.2f THB\n",t_braised,t_braised*150.00);
	printf("5. Meatball			120	THB/Pack	%d Pack		%.2f THB\n",t_ball,t_ball*120.00);
	printf("6. Stewed Tendon		200	THB/Set		%d Set		%.2f THB\n",t_tendon,t_tendon*200.00);
	printf("7. Scrap Beef			180	THB/Set		%d Set		%.2f THB\n",t_beef,t_scrap*180.00);
	printf("\nTOTAL INCOME : %.2f THB\n",income);
	return 0;
}
