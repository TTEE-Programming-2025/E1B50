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
	printf("�п�J�K�X:");
do{
	for(int i=0;i<4;i++){
        password[i]=getche();
    }
 	if(password[0]=='2'&&password[1]=='0'&&password[2]=='2'&& password[3]=='5'){
 		system("cls");
 		printf("\n�w��I�����N��i�J�D���:\n");
 		getchar();
 		break;
 	}
 	else{
        printf("\a\n��J���~�I\n");
    	count++;
    	if(count==3){
    	printf("\a\n��J���~3���F�I\n");
    	return 0;
    }
	}        
	
}while(count<3);
	
	
	printf("------------[Grade System]----------\n");
    printf("| a. Enter student grades      |\n");
    printf("| b. Display student grades    |\n");
    printf("| c. Search for student grades |\n");
    printf("| d. Grade ranking             |\n");
    printf("| e. Exit system               |\n");
    printf("------------------------------------\n");
    
    return 0;
}


