#include <stdio.h>
#include <string.h>
typedef struct{char n[20];int p;}F;typedef struct{int s;}C;typedef struct{char t[20];C c[2];int b;}L;
F f[4];L l[4];int fc=0,lc=0;
void g(){for(int i=0;i<4;i++){sprintf(f[i].n,"Friend %d",i+1);f[i].p=12+i;
sprintf(l[i].t,"LP Title %d",i+1);for(int j=0;j<2;j++)l[i].c[j].s=124+i*2+j;}fc=4;lc=4;puts("Test data generated!");}
void m(){int p,s,fi=-1,ci=-1;if(!fc){puts("No friends registered.");return;}
for(int i=0;i<fc;i++)printf("Friend Name: %s, Phone: %d\n",f[i].n,f[i].p);
printf("Insert friend's phone number: ");scanf("%d",&p);
for(int i=0;i<fc;i++)if(f[i].p==p){fi=i;break;}if(fi==-1){puts("Friend not found.");return;}
printf("Friend selected: %s (Phone: %d)\n",f[fi].n,f[fi].p);printf("Insert Serial Number: ");scanf("%d",&s);
for(int i=0;i<lc;i++)for(int j=0;j<2;j++)if(l[i].c[j].s==s){ci=i;break;}if(ci==-1){puts("Serial Number not found.");return;}
printf("Copy selected: %d\nConfirm loan? (y/n): ",s);char c;scanf(" %c",&c);
c=='y'||c=='Y'?printf("Loan created!\nTitle: %s\nSN: %d\nTo: %s\nStatus: ACTIVE\n",l[ci].t,s,f[fi].n):puts("Loan cancelled.");}
int main(){char c[3];while(1){
puts("\n****** Main Menu ******\n(1) Friends menu (dummy)\n(2) LP menu (dummy)\n(3) Loan menu\n(9) Generate test data\n(0) Quit");
printf("Choice: ");scanf("%s",c);printf("You chose: %s\n",c);
if(!strcmp(c,"3"))m();else if(!strcmp(c,"9"))g();else if(!strcmp(c,"0"))break;
else if(strcmp(c,"1")&&strcmp(c,"2"))puts("Invalid input try again");}}
