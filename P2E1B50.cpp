#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main(void){
char password[5];
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
 	for(a=0;a<1;a++)
		printf("  ~~     ~  |||||   ~~ ~   ~\n");
		
	printf("      ~     |||||\\       ~~        \n");
	printf("  ~     ~  /|||||\\\\    ~      ~    \n");
	printf("    ~~ // /||||||\\\\\\   // // ~    \n");
	printf("//.,,.//,//|||||||\\\\\\,//.//,//,/,\n");
	printf("�п�J�|��ƱK�X:");
do{
	for(int i=1;i<5;i++){
        password[i]=getche();
    }
 	if(password[1]=='2'&&password[2]=='0'&&password[3]=='2'&& password[4]=='5'){
 		system("cls");
 		printf("\n�w��I�����N��i�J�D���:");
 		break;
 	}
 	else{
        printf("\a��J���~�I\n");
    	count++;
	}        
}while(count<3);

char choice;
    while (1) {
        system("cls");	//�M���ù�
        printf("--------------------------\n");
        printf("| a. �e�X�����T����      |\n");
        printf("| b. ��ܭ��k��          |\n");
        printf("| c. ����                |\n");
        printf("--------------------------\n");
        printf("�п�ܿﶵ (a/b/c): ");
        choice=getch();

	switch(choice){
        case 'a': case 'A': {	//�e�����T����
            char ch;
            int N;
                do{
                    system("cls");
                    	printf("�п�J�@�� 'a' �� 'n' ���r��: ");
                    ch = getch();
                    	printf("%c\n", ch);

                    if (ch < 'a' || ch > 'n') {
                        printf("��J���~�I������ 'a'~'n'�A�����N�䭫�աC\n");
                    getch();
                    }
                }while (ch < 'a' || ch > 'n');

                N = ch - 'a' + 1;
                
                for(i = 1; i <= N; i++){
                    char start = ch - i + 1;
                    int j;
                		for (int s = 0; s < N - i; s++)
						{
        					putchar(' ');	//�������T���ξa�k 
						}
                    	for (j = start; j <= ch; j++) {
                       		printf("%c",j);
                    	}
                	putchar('\n');
                }
            
                printf("\n�����N���^�D���...");
                getch();
                break;
            }
        case 'b': case 'B': {	// ��ܭ��k��
            int n;
                do{
                    system("cls");
                    	printf("�п�J�@�� 1 �� 9 �����: ");
                    scanf("%d", &n);
                    if(n < 1 || n > 9){
                        printf("��J���~�I������ 1~9�A�����N�䭫�աC\n");
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
                printf("\n�����N���^�D���...");
                getch();
                break;
            }
            case 'c': case 'C': {	//�T�{�O�_�~��
                char yn;
                do{
                    system("cls");
                    	printf("Continue? (y/n): ");
                    yn = getch();
                    	printf("%c\n", yn);

                    if(yn == 'y' || yn == 'Y'){
                    	break;	//�^��D���
                    }else if (yn == 'n' || yn == 'N') {
                        	printf("\n�{�������A�P�¨ϥΡI\n");
                        return 0;	//�����{��
                    }else{
                        	printf("��J���~�I�Ы� 'y' �� 'n'�C\n");
                        getch();
                    }
                }while(1);
                break;
            }
            default:
                	printf("�L�Ŀﶵ�I�Ы� a, b �� c �K\n");
                getch();
                break;
        }
    }

    return 0;
}

//�Q�׻P�߱o�G

//1.�z�ѱ_���j�骺�O�q

//�z�L�u�~�h�j��v����C�@��n�e�X�Ӧr���A�u���h�j��v���L�Ů�A�L�r���A�ڧ�M���_���j�骺�γ~�G�@�h�t�d��ơA�@�h�t�d�C�ơA�N���F���a�e�X�U�عϧΡC

//�U���n�e��L�Ϯס]���O�ˤT���B�٧Ρ^�ɡA�u�n�վ�j�馸�ƩM����A�N��ֳt�ƻs��g�A�{���󦳼u�ʡC

//2.�Ů汱��M�w�������[

//�b�C�@��e���h�L�Ů�A�N���b�e���W�d�աA���ϧξ���a�a��k��C�o�����ڡG�{���ƪ����u�b�{���X�����A��X�������]�n���s���[�C

//��@���A�ھǨ�Ů�ƶq = �`��� - �ثe��ơA�o��²�檺�ƾ��޿��������T����ƪ��۵M����C

//3.�ӤH�����P�U�@�B

//�z�L�o���m�ߡA�ڧ���x C++ �y�����j��P�r���B��A�]��|��ƪ����P�����n�C

//�U�@�B�i�H�ոլD�ԧ�������ϧαƦC�A�i�@�B�����޿��һP�{���]�p��O�C
