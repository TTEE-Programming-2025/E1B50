#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h> 

struct 	data{
			char name[20];
			char id[7];
			int math;
			int phy;
			int eng;
			float avg;
			};//�w�q�ǥ͸�ƥε��c���}�C��{ 

struct data student[10]; //�w�q�����ܼ�
int n;

//a
void a(){
system("cls");//�M���e��
    int i;
	do{
		printf("��J5-10�����:");//��J5-10�����
		scanf("%d",&n);
		fflush(stdin); //����w�İϴݯd
		if(n>=5&&n<=10){
		break;
		}
		else{
		printf("��J���~,�Ч勵\n"); 
		}
	}while(n<5||n>10);

system("cls");//�M���e��

for(i=0;i<n;i++){

	printf("�� %d ��ǥͩm�W:",i+1);//��J�m�W
	scanf("%s",student[i].name);
	fflush(stdin); //����w�İϴݯd
	system("cls");//�M���e��

	do{
		printf("�� %d ��ǥ;Ǹ��]����):",i+1);//��J�Ǹ��]����)
	scanf("%s",student[i].id);
	fflush(stdin); //����w�İϴݯd
	if(strlen(student[i].id)==6){
		break;
	}
	else{
		printf("��J���~\n"); 
	}
	
}while(strlen(student[i].id)!=6);

	system("cls");//�M���e��

	do{
	printf("�� %d ��ǥͼƾǦ��Z(0-100):",i+1);//�ƾǦ��Z(0-100)
	scanf("%d",&student[i].math);
	fflush(stdin); //����w�İϴݯd
	if(student[i].math>=0&&student[i].math<=100){
		break;
	}
	else{
		printf("��J���~\n"); 
	}
	
}while(student[i].math<0||student[i].math>100);
system("cls");//�M���e��

	do{
	printf("�� %d ��ǥͪ��z���Z(0-100):",i+1);//���z���Z(0-100)
	scanf("%d",&student[i].phy);
	fflush(stdin); //����w�İϴݯd
	if(student[i].phy>=0&&student[i].phy<=100){
		break;
	}
	else{
		printf("��J���~\n"); 
	}
}while(student[i].phy<0||student[i].phy>100);
system("cls");//�M���e��


	do{
	printf("�� %d ��ǥͭ^�妨�Z(0-100):",i+1);//�^�妨�Z(0-100)
	scanf("%d",&student[i].eng);
	fflush(stdin); //����w�İϴݯd
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

//b��ܩҦ��ǥͩm�W�Ǹ����Z�P����
void b(){
	int i;
        for(i=0;i<n;i++){
            student[i].avg=(student[i].math+student[i].phy+student[i].eng)/3.0; //�p�⥭��
            printf("�m�W:%s �Ǹ�:%d �ƾ�:%d ���z:%d �^��: %d ����:%.1f\n",student[i].name,student[i].id,student[i].math,student[i].phy,student[i].eng,student[i].avg);
            printf("\n");
        }
        system("pause");//����e��
		system("cls");//�M���e��	        
}


//c
void c(){
	int i=0;
	char target[20];
	gets(target);
	for(i=0;i<n;i++)
	{
	if(strcmp(target,student[i].name)==0)
	{
	student[i].avg=(student[i].math+student[i].phy+student[i].eng)/3.0; //�p�⥭��
    printf("�m�W:%s �Ǹ�:%d �ƾ�:%d ���z:%d �^��: %d ����:%.1f\n",student[i].name,student[i].id,student[i].math,student[i].phy,student[i].eng,student[i].avg);
    printf("\n");
    }
}
	if(strcmp(target,student[i].name)!=0)
	printf("�d�L���H");
system("pause");
}
	
//d
void d(){
	int i,j;
	struct data x;
	for(i=0;i<n;i++)
	{
	student[i].avg=(student[i].math+student[i].phy+student[i].eng)/3.0; //�p�⥭��
	}
	for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 ; j++) {
            if(student[j].avg < student[j+1].avg) {
                x = student[j];
                student[j] = student[j+1];
                student[j+1] = x;
            }
        }
    }
	for(i=0;i<n;i++)
	{
	printf("�m�W:%s �Ǹ�:%d �ƾ�:%d ���z:%d �^��: %d ����:%.1f �ƦW%d\n",student[i].name,student[i].id,student[i].math,student[i].phy,student[i].eng,student[i].avg,i+1);
    printf("\n");
	}
	system("pause");
}	
int main(void){
char c2;
char password[4];
int m=15,i,j,count;
printf("        E1B50�����L��\n");
for(i=0;i<m;i++){
	for(j=0;j<m-i-1;j++){
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
 		printf("�w��I�����N��i�J�D���:\n");
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

	system("cls");
	while(1){
	printf("------------[Grade System]----------\n");
    printf("| a. Enter student grades          |\n");
    printf("| b. Display student grades        |\n");
    printf("| c. Search for student grades     |\n");
    printf("| d. Grade ranking                 |\n");
    printf("| e. Exit system                   |\n");
    printf("------------------------------------\n");
    

    char f;
	printf("�п�Ja-e:");
	scanf("%c",&f); 
	fflush(stdin); //����w�İϴݯd
	system("cls");//�M���e��
	switch(f){
		case 'a':case'A':
			a();
			break;
		case 'b':case'B':
			b();
			break;
	    case 'c':case'C':
			c();
			break;
		case 'd':case'D':
			d();
			break;
		case 'e':case'E':
                do {
                    printf("Continue? (y/n): ");
                    fflush(stdin);
                    c2 = getchar();
                    if (c2 == 'y'||c2 == 'Y') 
					break;
                    if (c2=='n'||c2=='N') 
					{ 
					printf("Goodbye!\n");
					return 0; 
					}
                    printf("Invalid input. ");
                } while (1);
                break;
        }
	}
    return 0;
}


