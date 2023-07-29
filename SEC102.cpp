#include<stdio.h>
main(){
	int cake,roll,brownie,crepe,banana,choc_lava,muffin,cookie;
	//Bakery Variable
	int t_cake=0,t_roll=0,t_brownie=0,t_crepe=0,t_banana=0,t_choc_lava=0,t_muffin=0,t_cookie=0;
	char menu,exit[2]={'0','0'};
	int i=0,amount=0;
	float payment=0,income=0,net_payment=0,net_income=0;
	do{
		i++;
		printf("\nCUSTOMER#%d\n",i);
		cake=0,roll=0,brownie=0,crepe=0,banana=0,choc_lava=0,muffin=0,cookie=0;
		exit[0] = '0', exit[1] = '0';
		do{
			printf("\nMENU : \n");
			printf("A. Birthday Cake	200 THB/pond	%d Pond		%.2f THB\n",cake,cake*200.00);
			printf("B. Roll Cake		20 THB/piece	%d Piece		%.2f THB\n",roll,roll*20.00);
			printf("C. Brownie		30 THB/piece	%d Piece		%.2f THB\n",brownie,brownie*30.00);
			printf("D. Crepe Cake		40 THB/piece	%d Piece		%.2f THB\n",crepe,crepe*40.00);
			printf("E. Banana Cake		35 THB/piece	%d Piece		%.2f THB\n",banana,banana*35.00);
			printf("F. Chocolate Lava	60 THB/piece	%d Piece		%.2f THB\n",choc_lava,choc_lava*60.00);
			printf("G. Muffin		25 THB/piece	%d Piece		%.2f THB\n",muffin,muffin*25.00);
			printf("H. Cookie		70 THB/pack	%d Pack		%.2f THB\n",cookie,cookie*70.00);
			printf("N. Calculate Payment\n");
			printf("Enter menu : ");
			fflush(stdin);
			scanf("%c",&menu);
			if(menu=='n'||menu=='N'){
				printf("\nCalculate Payment. . .\n");
				break;
			}
			printf("Enter Amount : ");
			scanf("%d",&amount);
			if(menu=='a'||menu=='A')
				cake+=amount;
			else if(menu=='b'||menu=='B')
				roll+=amount;
			else if(menu=='c'||menu=='C')
				brownie+=amount;
			else if(menu=='d'||menu=='D')
				crepe+=amount;
			else if(menu=='e'||menu=='E')
				banana+=amount;
			else if(menu=='f'||menu=='F')
				choc_lava+=amount;
			else if(menu=='g'||menu=='G')
				muffin+=amount;
			else if(menu=='h'||menu=='H')
				cookie+=amount;
			else 
				printf("\nTry again\n");
		}while(1);
		t_cake+=cake;
		t_roll+=roll;
		t_brownie+=brownie;
		t_crepe+=crepe;
		t_banana+=banana;
		t_choc_lava+=choc_lava;
		t_muffin+=muffin;
		t_cookie+=cookie;
		payment = ((cake*200.00)+(roll*20.00)+(brownie*30.00)+(crepe*40.00)+(banana*35.00)+(choc_lava*60.00)+(muffin*25.00)+(cookie*70.00));
		if(payment>5000){
			printf("\nGet 20%% discount!!!\n");
			net_payment = payment*0.8;
		}
		else if(payment>1000&&payment<=5000){
			printf("\nGet 10%% discount!!!\n");
			net_payment = payment*0.9;
		}	
		else if(payment>500&&payment<=1000){
			printf("\nGet 5%% discount!!!\n");
			net_payment = payment*0.95;
		}	
		else
			net_payment = payment*1;
		net_income+=net_payment;
		income+=payment;
		printf("\nPayment : %.2f THB\n",payment);
		printf("Net Payment : %.2f THB\n",net_payment);
		printf("\nEnter '-1' to End Program : ");
		scanf("%s",exit);
		if(exit[0]=='-'&&exit[1]=='1')
			break;
	}while(1);
	printf("\nBakery Income : \n");
	printf("\nCustomer : %d\n",i);
	printf("A. Birthday Cake	200 THB/pond	%d Pond		%.2f THB\n",t_cake,t_cake*200.00);
	printf("B. Roll Cake		20 THB/piece	%d Piece		%.2f THB\n",t_roll,t_roll*20.00);
	printf("C. Brownie		30 THB/piece	%d Piece		%.2f THB\n",t_brownie,t_brownie*30.00);
	printf("D. Crepe Cake		40 THB/piece	%d Piece		%.2f THB\n",t_crepe,t_crepe*40.00);
	printf("E. Banana Cake		35 THB/piece	%d Piece		%.2f THB\n",t_banana,t_banana*35.00);
	printf("F. Chocolate Lava	60 THB/piece	%d Piece		%.2f THB\n",t_choc_lava,t_choc_lava*60.00);
	printf("G. Muffin		25 THB/piece	%d Piece		%.2f THB\n",t_muffin,t_muffin*25.00);
	printf("H. Cookie		70 THB/pack	%d Pack		%.2f THB\n",t_cookie,t_cookie*70.00);
	printf("\nTotal Income : %.2f\n",income);
	printf("Net Income : %.2f\n",net_income);
}
