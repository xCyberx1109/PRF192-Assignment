#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define MAXN 100

int menu(){
	int choice;
	pritnf("\nParallel Array of Drinks:");
	printf("\n1 - Add a new Drink");
	printf("\n2 - Edit information: price of a drink by its code");
	printf"\n3 - Edit information: name of a drink by its code");
	printf("\n4 - Delete a drink by its code");
	printf("\n5 - Arrange the drink list by drink type (descending)");
	printf("\n6 - Arrange the drink list by price (ascending)");
	printf("n\7 - Print the drink list");
	printf("n\8 - Print the drink by its code");
	printf("n\9 - Print the drink list by price condition");
	printf("n\10 - Print the average, highest and lowest drink price ");
	printf("n\Other - Quit");
	printf("n\Please choose: ");
	scanf("%d%*c", &choice); //remove enter key
	return choice;
}

/* Check if array is full */
int isFull(char drink_name[][50], int n){
	return n==MAXN;	
};

/* Check if array is empty or not*/
int isEmpty(char drink_name[][50], int n){
	return n==0;
}; 


void add(char drink_code[50], char drink_name[50], char drink_type[50], int unit, double price,char drink_codes[][50],char drink_names[][50],char drink_types[][50], int units[], double prices[], int *pn)
{
	strcpy(drink_codes[*pn] = drink_code); //add instance to the end of the array
	strcpy(drink_names[*pn] = drink_name);
	strcpy(drink_types[*pn] = drink_type);
	units[*pn] = unit;
	prices[*pn] = price;
	*pn = *pn + 1; //increase the number of elements use 
}

void edit_price(char drink_code[50], double price,char drink_codes[][50],char drink_names[][50],char drink_types[][50], int units[], double prices[],*pn){
	int i;
	int result = MAXN + 1;
	for(i=0;i<= *pn; i++){
		if(drink_codes[i] == drink_code){
			result = i;
		}
		};
	if(result != MAXN + 1) {
		prices[result] = price;
	}
	else
	{printf("The code is not existed");
	}
	}

void edit_name(char drink_code[50], double price,char drink_codes[][50],char drink_names[][50],char drink_types[][50], int units[], char drink_name[50], *pn){
	int i;
	int result = MAXN + 1;
	for(i=0;i<= *pn; i++){
		if(drink_codes[i] == drink_code){
			result = i;
		}
		};
	if(result != MAXN + 1) {
		drink_names[result] = drink_name;
	}
	else
	{printf("The code is not existed");
	}
	}
	
	
int delete_drink(char drink_code[50], double price,char drink_codes[][50],char drink_names[][50],char drink_types[][50], int units[], char drink_name[50], *pn){
	int i;
	int pos = MAXN + 1;
	int result;
	for(i=0;i<= *pn; i++){
		if(drink_codes[i] == drink_code){
			pos = i;
		}
		};
	if(pos != MAXN + 1) {
		for(i = pos; i< *pn -1;i++) {
			strcpy(drink_codes[i], drink_codes[i+1]);
			strcpy(drink_names[i], drink_names[i+1]);
			strcpy(drink_types[i] = drink_types[i+1]);
			units[i] = units[i+1];
			prices[i] = prices[i+1];
		}
		*pn = *pn - 1;
		result = 1;//successfully
	}
	else
	{printf("The code is not existed");
	 result = 0;//unsuccesfully
	};
	return result;
	}

//nghien cuu swap 2 generic positions
//sort the drink list based on drink type
void sort_drink_type(char drink_names[][50],char drink_types[][50], int units[], double prices[], int *pn)
{int i;
 int j;
 for(i = 0; i< *pn-1;i++){
 	for(j = 0; j<*pn -1 -i; j++){
 		int dType  = strcmp(drink_types[j], drink_types[j+1]);
 		if(dType <0){
 			drink_names[j] = drink
		 }
 		
	 }
 }
}
		
	
	
	


