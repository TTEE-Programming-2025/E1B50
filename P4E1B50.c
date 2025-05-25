#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h> 
//定義學生資料用結構的陣列實現且定義全域變數 
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
system("cls");//清除畫面
    int i,n;
	do{
		printf("輸入5-10的整數:");//輸入5-10的整數
		scanf("%d",&n);
		if(n>=5&&n<=10){
		break;
		}
		else{
		printf("\n輸入錯誤,請改正\n"); 
		}
	}while(n<5||n>10);

system("cls");//清除畫面

for(i=0;i<n;i++){

	printf("第 %d 位學生姓名:",i+1);//輸入姓名
	scanf("%s",student[i].name);
	system("cls");//清除畫面

	do{
		printf("第 %d 位學生學號:",i+1);//輸入學號（六位數)
	scanf("%s",student[i].id);
	if(strlen(student[i].id)==6){
		break;
	}
	else{
		printf("輸入錯誤\n"); 
	}
	
}while(strlen(student[i].id)!=6);

	system("cls");//清除畫面

	do{
	printf("第 %d 位學生數學成績:",i+1);//數學成績
	scanf("%d",&student[i].math);
	if(student[i].math>=0&&student[i].math<=100){
		break;
	}
	else{
		printf("輸入錯誤\n"); 
	}
	
}while(student[i].math<0||student[i].math>100);
system("cls");//清除畫面

	do{
	printf("第 %d 位學生物理成績:",i+1);//物理成績
	scanf("%d",&student[i].phy);
	if(student[i].phy>=0&&student[i].phy<=100){
		break;
	}
	else{
		printf("輸入錯誤\n"); 
	}
}while(student[i].phy<0||student[i].phy>100);
system("cls");//清除畫面


	do{
	printf("第 %d 位學生英文成績:",i+1);//英文成績
	scanf("%d",&student[i].eng);
	if(student[i].eng>=0&&student[i].eng<=100){
		break;
	}
	else{
		printf("輸入錯誤\n"); 
	}
	
}while(student[i].eng<0||student[i].eng>100);
system("cls");//清除畫面

}
}

	
int main(void){
 char password[4];
 int n=15,i,j,a,count;
 printf("        E1B50王楊馥華\n");
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
	printf("請輸入密碼:");
	
do{
	int i;
	for(i=0;i<4;i++){
        password[i]=getche();
    }
 	if(password[0]=='2'&&password[1]=='0'&&password[2]=='2'&& password[3]=='5'){
 		system("cls");
 		printf("\n歡迎！按任意鍵進入主選單:\n");
 		getch();
 		break;
 	}
 	else{
        printf("\a\n輸入錯誤！\n");
    	count++;
    	if(count==3){
    	printf("\a\n輸入錯誤3次了！\n");
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


