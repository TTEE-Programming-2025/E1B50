#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main(void){
char password[5];
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
 	for(a=0;a<1;a++)
		printf("  ~~     ~  |||||   ~~ ~   ~\n");
		
	printf("      ~     |||||\\       ~~        \n");
	printf("  ~     ~  /|||||\\\\    ~      ~    \n");
	printf("    ~~ // /||||||\\\\\\   // // ~    \n");
	printf("//.,,.//,//|||||||\\\\\\,//.//,//,/,\n");

do{
	for(int i=1;i<5;i++){
        password[i]=getche();
    }
 	if(password[1]=='2'&&password[2]=='0'&&password[3]=='2'&& password[4]=='5'){
 		system("cls");
 		printf("\n歡迎！按任意鍵進入主選單:");
 		break;
 	}
 	else{
        printf("\a輸入錯誤！\n");
    	count++;
	}        
}while(count<3);

char choice;
    while (1) {
        system("cls");	//清除螢幕
        printf("--------------------------\n");
        printf("| a. 畫出直角三角形      |\n");
        printf("| b. 顯示乘法表          |\n");
        printf("| c. 結束                |\n");
        printf("--------------------------\n");
        printf("請選擇選項 (a/b/c): ");
        choice=getch();

	switch(choice){
        case 'a': case 'A': {	//畫直角三角形
            char ch;
            int N;
                do{
                    system("cls");
                    	printf("請輸入一個 'a' 到 'n' 的字元: ");
                    ch = getch();
                    	printf("%c\n", ch);

                    if (ch < 'a' || ch > 'n') {
                        printf("輸入錯誤！必須為 'a'~'n'，按任意鍵重試。\n");
                    getch();
                    }
                }while (ch < 'a' || ch > 'n');

                N = ch - 'a' + 1;
                
                for(i = 1; i <= N; i++){
                    char start = ch - i + 1;
                    int j;
                		for (int s = 0; s < N - i; s++)
						{
        					putchar(' ');	//讓直角三角形靠右 
						}
                    	for (j = start; j <= ch; j++) {
                       		printf("%c",j);
                    	}
                	putchar('\n');
                }
            
                printf("\n按任意鍵返回主選單...");
                getch();
                break;
            }
        case 'b': case 'B': {	// 顯示乘法表
            int n;
                do{
                    system("cls");
                    	printf("請輸入一個 1 至 9 的整數: ");
                    scanf("%d", &n);
                    if(n < 1 || n > 9){
                        printf("輸入錯誤！必須為 1~9，按任意鍵重試。\n");
                    getch();
                    }
                }while (n < 1 || n > 9);

                system("cls");
                for(int row = 1; row <= n; row++){
                    for(int col = 1; col <= n; col++){
                        printf("%2d*%2d=%2d  ", row, col, row * col);
                    }
                    printf("\n");
                }
                printf("\n按任意鍵返回主選單...");
                getch();
                break;
            }
            case 'c': case 'C': {	//確認是否繼續
                char yn;
                do{
                    system("cls");
                    	printf("Continue? (y/n): ");
                    yn = getch();
                    	printf("%c\n", yn);

                    if(yn == 'y' || yn == 'Y'){
                    	break;	//回到主選單
                    }else if (yn == 'n' || yn == 'N') {
                        	printf("\n程式結束，感謝使用！\n");
                        return 0;	//結束程式
                    }else{
                        	printf("輸入錯誤！請按 'y' 或 'n'。\n");
                        getch();
                    }
                }while (1);
                break;
            }
            default:
                	printf("無效選項！請按 a, b 或 c …\n");
                getch();
                break;
        }
    }

    return 0;
}
