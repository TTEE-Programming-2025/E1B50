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
			};//定義學生資料用結構的陣列實現 

struct data student[10]; //定義全域變數
int n;

//a
void a(){
system("cls");//清除畫面
    int i;
	do{
		printf("輸入5-10的整數:");//輸入5-10的整數
		scanf("%d",&n);
		fflush(stdin); //防止緩衝區殘留
		if(n>=5&&n<=10){
		break;
		}
		else{
		printf("輸入錯誤,請改正\n"); 
		}
	}while(n<5||n>10);

system("cls");//清除畫面

for(i=0;i<n;i++){

	printf("第 %d 位學生姓名:",i+1);//輸入姓名
	scanf("%s",student[i].name);
	fflush(stdin); //防止緩衝區殘留
	system("cls");//清除畫面

	do{
		printf("第 %d 位學生學號（六位):",i+1);//輸入學號（六位)
	scanf("%s",student[i].id);
	fflush(stdin); //防止緩衝區殘留
	if(strlen(student[i].id)==6){
		break;
	}
	else{
		printf("輸入錯誤\n"); 
	}
	
}while(strlen(student[i].id)!=6);

	system("cls");//清除畫面

	do{
	printf("第 %d 位學生數學成績(0-100):",i+1);//數學成績(0-100)
	scanf("%d",&student[i].math);
	fflush(stdin); //防止緩衝區殘留
	if(student[i].math>=0&&student[i].math<=100){
		break;
	}
	else{
		printf("輸入錯誤\n"); 
	}
	
}while(student[i].math<0||student[i].math>100);
system("cls");//清除畫面

	do{
	printf("第 %d 位學生物理成績(0-100):",i+1);//物理成績(0-100)
	scanf("%d",&student[i].phy);
	fflush(stdin); //防止緩衝區殘留
	if(student[i].phy>=0&&student[i].phy<=100){
		break;
	}
	else{
		printf("輸入錯誤\n"); 
	}
}while(student[i].phy<0||student[i].phy>100);
system("cls");//清除畫面


	do{
	printf("第 %d 位學生英文成績(0-100):",i+1);//英文成績(0-100)
	scanf("%d",&student[i].eng);
	fflush(stdin); //防止緩衝區殘留
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

//b顯示所有學生姓名學號成績與平均
void b(){
	int i;
        for(i=0;i<n;i++){
            student[i].avg=(student[i].math+student[i].phy+student[i].eng)/3.0; //計算平均
            printf("姓名:%s 學號:%d 數學:%d 物理:%d 英文: %d 平均:%.1f\n",student[i].name,student[i].id,student[i].math,student[i].phy,student[i].eng,student[i].avg);
            printf("\n");
        }
        system("pause");//停止畫面
		system("cls");//清除畫面	        
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
	student[i].avg=(student[i].math+student[i].phy+student[i].eng)/3.0; //計算平均
    printf("姓名:%s 學號:%d 數學:%d 物理:%d 英文: %d 平均:%.1f\n",student[i].name,student[i].id,student[i].math,student[i].phy,student[i].eng,student[i].avg);
    printf("\n");
    }
}
	if(strcmp(target,student[i].name)!=0)
	printf("查無此人");
system("pause");
}
	
//d
void d(){
	int i,j;
	struct data x;
	for(i=0;i<n;i++)
	{
	student[i].avg=(student[i].math+student[i].phy+student[i].eng)/3.0; //計算平均
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
	printf("姓名:%s 學號:%d 數學:%d 物理:%d 英文: %d 平均:%.1f 排名%d\n",student[i].name,student[i].id,student[i].math,student[i].phy,student[i].eng,student[i].avg,i+1);
    printf("\n");
	}
	system("pause");
}	
int main(void){
char c2;
char password[4];
int m=15,i,j,count;
printf("        E1B50王楊馥華\n");
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
	printf("請輸入密碼:");
	

do{
	int i;
	for(i=0;i<4;i++){
        password[i]=getche();
    }
 	if(password[0]=='2'&&password[1]=='0'&&password[2]=='2'&& password[3]=='5'){
 		system("cls");
 		printf("歡迎！按任意鍵進入主選單:\n");
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
	printf("請輸入a-e:");
	scanf("%c",&f); 
	fflush(stdin); //防止緩衝區殘留
	system("cls");//清除畫面
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


