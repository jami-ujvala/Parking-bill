#include<stdio.h>
int main()
{
int choice,bill,entrytime,exittime,mintues,rate,fees,penality=0;
int lost;
float hour;
printf("parking fee system\n");
printf("1.two wheller\n2.car\n3.heavy vehicle\n");
printf("enter a choice:");
scanf("%d",&choice);
printf("entry time:");
scanf("%d",&entrytime);
printf("exit time:");
scanf("%d",&exittime);
printf("lost ticket\n");
printf("1.yes\n2.no\n");
printf("enter a choice:");
scanf("%d",&lost);
switch(choice){
case 1:printf("two wheller\n");
       printf("rate=10\n");
       break;
case 2:printf("car\n");
       printf("rate=20\n");
       break;
case 3:printf("heavy vehicle\n"); 
       printf("rate=30\n");
       break;
default:printf("invalid");
}
hour=(exittime-entrytime)/60.0;
if(hour<1){
   printf("free");
   fees=0;
   }
else if(hour>=1){
     if(choice==1){
       fees=hour*10;
       }
    else if(choice==2){  
       fees=hour*20;
       }
     else if(choice==3){
       fees=hour*30;
       }
     }
printf("hours=%2f\nfees=%d\n",hour,fees);       
if(lost==1)
   bill=fees+200;
else
   bill=fees;
printf("bill=%d",bill);   
return 0;
}               