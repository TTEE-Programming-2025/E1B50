#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h> 
//�w�q�ǥ͸�ƥε��c���}�C��{�B�w�q�����ܼ� 
struct data{
		char name[20];
		char id[7];
		int math;
		int phy;
		int eng;
		float avg;
	}student[10];

//a
void a(){
system("cls");//�M���e��
    int i,n;
	do{
		printf("��J5-10�����:");//��J5-10�����
		scanf("%d",&n);
		if(n>=5&&n<=10){
		break;
		}
		else{
		printf("\n��J���~,�Ч勵\n"); 
		}
	}while(n<5||n>10);

system("cls");//�M���e��

for(i=0;i<n;i++){

	printf("�� %d ��ǥͩm�W:",i+1);//��J�m�W
	scanf("%s",student[i].name);
	system("cls");//�M���e��

	do{
		printf("�� %d ��ǥ;Ǹ�:",i+1);//��J�Ǹ��]�����)
	scanf("%s",student[i].id);
	if(strlen(student[i].id)==6){
		break;
	}
	else{
		printf("��J���~\n"); 
	}
	
}while(strlen(student[i].id)!=6);

	system("cls");//�M���e��

	do{
	printf("�� %d ��ǥͼƾǦ��Z:",i+1);//�ƾǦ��Z
	scanf("%d",&student[i].math);
	if(student[i].math>=0&&student[i].math<=100){
		break;
	}
	else{
		printf("��J���~\n"); 
	}
	
}while(student[i].math<0||student[i].math>100);
system("cls");//�M���e��

	do{
	printf("�� %d ��ǥͪ��z���Z:",i+1);//���z���Z
	scanf("%d",&student[i].phy);
	if(student[i].phy>=0&&student[i].phy<=100){
		break;
	}
	else{
		printf("��J���~\n"); 
	}
}while(student[i].phy<0||student[i].phy>100);
system("cls");//�M���e��


	do{
	printf("�� %d ��ǥͭ^�妨�Z:",i+1);//�^�妨�Z
	scanf("%d",&student[i].eng);
	if(student[i].eng>=0&&student[i].eng<=100){
		break;
	}
	else{
		printf("��J���~\n"); 
	}
	
}while(student[i].eng<0||student[i].eng>100);
system("cls");//�M���e��

}
}

	
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
	int i;
	for(i=0;i<4;i++){
        password[i]=getche();
    }
 	if(password[0]=='2'&&password[1]=='0'&&password[2]=='2'&& password[3]=='5'){
 		system("cls");
 		printf("\n�w��I�����N��i�J�D���:\n");
 		getch();
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
    printf("| a. Enter student grades          |\n");
    printf("| b. Display student grades        |\n");
    printf("| c. Search for student grades     |\n");
    printf("| d. Grade ranking                 |\n");
    printf("| e. Exit system                   |\n");
    printf("------------------------------------\n");
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}


