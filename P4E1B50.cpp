#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h> 
int main(void){
 char password[4];
 int n=15,i,j,a,count;
 printf("        E1B50�����L��\n");
for(i=0;i<n;i++){
	for(j=0;j<n-i-1;j++){
		printf(" ");
	}
	for(j=0;j<2*i+1;j++){
   		printf("^");
   	}
  		printf("\n");
 	}
	printf("  ~~     ~  |||||   ~~ ~   ~\n");
	printf("      ~     |||||\\       ~~        \n");
	printf("  ~     ~  /|||||\\\\    ~      ~    \n");
	printf("    ~~ // /||||||\\\\\\   // // ~    \n");
	printf("//.,,.//,//|||||||\\\\\\,//.//,//,/,\n");

do{
	for(int i=0;i<4;i++){
        password[i]=getche();
    }
 	if(password[0]=='2'&&password[1]=='0'&&password[2]=='2'&& password[3]=='5'){
 		system("cls");
 		printf("\n�w��I�����N��i�J�D���:");
 		break;
 	}
 	else{
        printf("\a��J���~�I\n");
    	count++;
	}        
}while(count<3);


