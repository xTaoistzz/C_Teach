#include<stdio.h>
int main(){
	int pork=0,beef=0,buf_meat=0,oftal=0,water=0,amount=0;
	//Market Variable
	int t_pork=0,t_beef=0,t_buf=0,t_oftal=0,t_water=0,customer=0;
	char type,exit;
	float total_payment=0,income=0;
	do{
		customer++;
		pork=0,beef=0,buf_meat=0,oftal=0,water=0;
		printf("\nCustomer#%d",customer);
		do{
			type = '0',amount=0;
			printf("\n1. Pork			%d		%.2f THB\n",pork,pork*150.00);
			printf("2. Beef			%d		%.2f THB\n",beef,beef*250.00);
			printf("3. Buf_meat		%d		%.2f THB\n",buf_meat,buf_meat*275.00);
			printf("4. Oftal 		%d		%.2f THB\n",oftal,oftal*115.00);
			printf("5. Water		%d		%.2f THB\n",water,water*10.00);
			printf("Select menu : ");
			fflush(stdin);
			scanf("%c",&type);
			printf("\nAmount : ");
			scanf("%d",&amount);
			if(type=='1'){
				pork+=amount;
				t_pork+=amount;
			}
			else if(type=='2'){
				beef+=amount;
				t_beef+=amount;
			}
			else if(type=='3'){
				buf_meat+=amount;
				t_buf+=amount;
			}
			else if(type=='4'){
				oftal+=amount;
				t_oftal+=amount;
			}
			else if(type=='5'){
				water+=amount;
				t_water+=amount;
			}	
			else if(type=='n'||type=='N')
				printf("\nCalculate Payment . . .\n");
			else
				printf("Try again\n");
		}while(type!='N'&&type!='n');
		total_payment = ((pork*150.00)+(beef*250.00)+(buf_meat*275.00)+(oftal*115.00)+(water*10.00));
		printf("1. Pork			%d		%.2f THB\n",pork,pork*150.00);
		printf("2. Beef			%d		%.2f THB\n",beef,beef*250.00);
		printf("3. Buf_meat		%d		%.2f THB\n",buf_meat,buf_meat*275.00);
		printf("4. Oftal 		%d		%.2f THB\n",oftal,oftal*115.00);
		printf("5. Water		%d		%.2f THB\n",water,water*10.00);
		printf("\nTotal Payment : %.2f",total_payment);
		printf("\nPress 'Z' to Calculate income : ");
		fflush(stdin);
		scanf("%c",&exit);
	}while(exit!='z'&&exit!='Z');
	income = ((t_pork*150.00)+(t_beef*250.00)+(t_buf*275.00)+(t_oftal*115.00)+(t_water*10.00));
	printf("\nCustomer : %d",customer);
	printf("\n1. Pork			%d		%.2f THB\n",t_pork,t_pork*150.00);
	printf("2. Beef			%d		%.2f THB\n",t_beef,t_beef*250.00);
	printf("3. Buf_meat		%d		%.2f THB\n",t_buf,t_buf*275.00);
	printf("4. Oftal 		%d		%.2f THB\n",t_oftal,t_oftal*115.00);
	printf("5. Water		%d		%.2f THB\n",t_water,t_water*10.00);
	printf("\nTotal Income : %.2f",income);
	return 0;
}
