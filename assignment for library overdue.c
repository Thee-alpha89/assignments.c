//program to calculate the fine for overdue
/*
Author:Pascal Kamau
Reg No:CT101/G/19917/23
Date:02/10/2024
*/
#include<stdio.h>
int main(){
	int bookid,duedate,returndate;
	int daysdue;
	float fineamount;
	//take value from user
	printf("enter the bookid\n:");
	scanf("%d",&bookid);
	printf("enter the duedate\n:");
	scanf("%d",&duedate);
	printf("enter returndate\n:");
	scanf("%d",&returndate);
	//calculate days due using the formula below
	daysdue=returndate-duedate;
	if(daysdue<=7){
		printf("fineamount=ksh20");
		printf("fineamount:ksh%.2f\n",fineamount);
}
else if(daysdue<=14){
	printf("fineamount=ksh50");
	printf("fineamount:ksh%.2f\n",fineamount);
}else if(daysdue>14){
printf("fineamount=ksh100");
	printf("fineamount:ksh%.2f\n",fineamount);
}
printf("fineamount:ksh%.2f\n",fineamount);
return 0;
 }