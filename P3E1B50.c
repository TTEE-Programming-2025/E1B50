#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Why #include <time.h>
Get the current time as a random number seed
srand(time(NULL)); This program will use the "current time (seconds)" as the random number seed to ensure 
that the seat allocation is different each time rand() is executed, 
increasing authenticity and fairness.
The time functions are defined in <time.h>
If <time.h> is not introduced, the compiler will not find the declaration of time(), 
resulting in a compilation error.
*/ 

#ifdef _WIN32
  #define CLEAR_CMD "cls"
#else
  #define CLEAR_CMD "clear"
#endif

#define ROWS 9
#define COLS 9

/* Function prototypes */
void displayWelcome();
void clearScreen();
void initSeats(int seats[ROWS][COLS]);
void showSeats(int seats[ROWS][COLS], int suggestions[ROWS][COLS],
               char reservedMark, char suggestMark);
void optionAvailable(int seats[ROWS][COLS]);
void optionAutoArrange(int seats[ROWS][COLS]);
void optionManualChoose(int seats[ROWS][COLS]);
void commitSuggestions(int seats[ROWS][COLS], int suggestions[ROWS][COLS]);

int main(void) {
    int seats[ROWS][COLS] = {0};
    char choice;
    int password, attempts = 0;

    /* (1): Welcome screen + password */
    displayWelcome();
    while (attempts < 3) {
        if (scanf("%d", &password) != 1) {
            while (getchar() != '\n');
            password = 0;
        }
        if (password == 2025) {
            printf("\nPassword correct. Welcome!\n");
            break;
        } else {
            attempts++;
            printf("Incorrect. You have %d attempt(s) left: ",
                   3 - attempts);
        }
    }
    if (attempts == 3) {
        printf("\nToo many failed attempts. Exiting program.\n");
        return 0;
    }

    /* Initialize 10 random reserved seats */
    initSeats(seats);

   /* (2)Main menu loop */
    do{
        clearScreen();
        printf("----------[Booking System]----------\n");
        printf("| a. Available seats               |\n");
        printf("| b. Arrange for you               |\n");
        printf("| c. Choose by yourself            |\n");
        printf("| d. Exit                          |\n");
        printf("------------------------------------\n");
        printf("Enter choice: ");

        while (getchar() != '\n');
        choice = getchar();
        switch (choice) {
            case 'a': case 'A': optionAvailable(seats); break;//(3)
            case 'b': case 'B': optionAutoArrange(seats); break;//(4)
            case 'c': case 'C': optionManualChoose(seats); break;//(5)
            case 'd': case 'D': //(6)
			{
                char c2;
                do {
                    printf("Continue? (y/n): ");
                    while (getchar() != '\n');
                    c2 = getchar();
                    if (c2=='y'||c2=='Y') break;
                    if (c2=='n'||c2=='N') { printf("Goodbye!\n"); return 0; }
                    printf("Invalid input. ");
                } while (1);
                break;
            }
            default:
                printf("Invalid choice. Press Enter to retry...");
                while (getchar()!='\n');
        }
    }while(1);

    return 0;
}

/* Display a 20+ line ASCII-art welcome/personal style screen */
void displayWelcome() {
    printf("**************************************************\n");
    printf("*                                                *\n");
    printf("*             W E L C O M E   T O                *\n");
    printf("*                                                *\n");
    printf("*          B O O K I N G   S Y S T E M           *\n");
    printf("*                                                *\n");
    printf("*           Developed by: Marx                   *\n");
    printf("*                                                *\n");
    printf("*         University: Tatung University          *\n");
    printf("*          Department: Electrical Eng.           *\n");
    printf("*                                                *\n");
    printf("*           Secure Access Required               *\n");
    printf("*            Please Enter 4-digit                *\n");
    printf("*                Password:                       *\n");
    printf("*                                                *\n");
    printf("*              Enjoy your day!                   *\n");
    printf("*  Designed for Students: Practical and Fun!     *\n");
    printf("**************************************************\n");
    printf("**************************************************\n");
    printf("\nEnter password: ");
}

/* Cross-platform clear screen */
void clearScreen() {
    system(CLEAR_CMD);
}

/* Randomly reserve 10 unique seats */
void initSeats(int seats[ROWS][COLS]) {
    srand((unsigned)time(NULL));
    int count = 0;
    while (count < 10) {
        int r = rand() % ROWS;
        int c = rand() % COLS;
        if (seats[r][c] == 0) {
            seats[r][c] = 1;
            count++;
        }
    }
}

/* Show seats: reservedMark for reserved, suggestMark for suggestions */
void showSeats(int seats[ROWS][COLS], int suggestions[ROWS][COLS],
               char reservedMark, char suggestMark) {
    int r, c;
    printf("\\");
    for (c=1; c<=COLS; c++) printf("%d", c);
    printf("\n");
    for (r=ROWS; r>=1; r--) {
        printf("%d", r);
        for (c=1; c<=COLS; c++) {
            if (seats[r-1][c-1]==1) printf("%c", reservedMark);
            else if (suggestions[r-1][c-1]) printf("%c", suggestMark);
            else printf("-");
        }
        printf("\n");
    }
}

/* Option a: display current reserved seats */
void optionAvailable(int seats[ROWS][COLS]) {
    int suggestions[ROWS][COLS] = {0};
    clearScreen();
    showSeats(seats, suggestions, '*', '@');
    printf("Press Enter to return to menu...");
    while (getchar()!='\n'); while (getchar()!='\n');
}

/* Option b: auto-arrange seats */
void optionAutoArrange(int seats[ROWS][COLS]) {
    int n, r, c, i;
    int suggestions[ROWS][COLS] = {0};
    clearScreen();
    printf("How many seats would you like (1-4)? ");
    scanf("%d", &n);
    if (n<1||n>4) { printf("Invalid number. Returning to menu...\n"); getchar(); getchar(); return; }
    if (n<=3) {
        while (1) {
            r = rand()%ROWS;
            c = rand()%(COLS-n+1);
            for (i=0; i<n; i++) if (seats[r][c+i]) break;
            if (i==n) { for (i=0; i<n; i++) suggestions[r][c+i]=1; break; }
        }
    } else {
        int found=0;
        for (r=0; r<ROWS && !found; r++) {
            for (c=0; c<=COLS-4; c++) {
                for (i=0; i<4; i++) if (seats[r][c+i]) break;
                if (i==4) { for(i=0;i<4;i++) suggestions[r][c+i]=1; found=1; break; }
            }
        }
        if (!found) {
            while (1) {
                r = rand()%(ROWS-1);
                c = rand()%(COLS-1);
                if (!seats[r][c]&&!seats[r][c+1]&&!seats[r+1][c]&&!seats[r+1][c+1]) {
                    suggestions[r][c]=suggestions[r][c+1]=suggestions[r+1][c]=suggestions[r+1][c+1]=1;
                    break;
                }
            }
        }
    }
    clearScreen(); showSeats(seats,suggestions,'*','@');
    printf("Accept this arrangement? (y/n): ");
    getchar(); if (getchar()=='y') commitSuggestions(seats,suggestions);
}

/* Option c: manual seat selection */
void optionManualChoose(int seats[ROWS][COLS]) {
    int suggestions[ROWS][COLS]={0}; int r,c;
    char input[10]; clearScreen();
    printf("Enter seats one by one (e.g. 1-2). Enter 0-0 to finish.\n");
    while (1) {
        printf("Seat: "); scanf("%9s",input);
        if (sscanf(input,"%d-%d",&r,&c)!=2) { printf("Format error. Try again.\n"); continue; }
        if (r==0 && c==0) break;
        if (r<1||r>ROWS||c<1||c>COLS||seats[r-1][c-1]||suggestions[r-1][c-1]) {
            printf("Invalid or already taken. Try again.\n"); continue;
        }
        suggestions[r-1][c-1]=1;
    }
    clearScreen(); showSeats(seats,suggestions,'*','@');
    printf("Press Enter to confirm choices...");
    while(getchar()!='\n'); while(getchar()!='\n');
    commitSuggestions(seats,suggestions);
}

/* Commit suggested seats into final reserved seats */
void commitSuggestions(int seats[ROWS][COLS], int suggestions[ROWS][COLS]) {
    int r,c; for(r=0;r<ROWS;r++) for(c=0;c<COLS;c++)
        if (suggestions[r][c]) seats[r][c]=1;
}

/*(7)
 * Description:
 *   This program implements a simple seat booking system for a 9¡Ñ9 venue.
 *   Features:
 *     1. Displays a custom ASCII-art welcome screen (>=20 lines) and prompts for
 *        a 4-digit password (default 2025). Allows up to 3 attempts.
 *     2. Clears the screen and shows the main menu:
 *          a. Available seats
 *          b. Arrange for you
 *          c. Choose by yourself
 *          d. Exit
 *     3. ¡§a¡¨: Show current seats (randomly reserve 10 seats on startup).
 *     4. ¡§b¡¨: Ask number of seats (1¡V4), auto-assign continuous seats (¡¥@¡¦),
 *        confirm with user, then commit (¡¥@¡¦ ¡÷ ¡¥*¡¦).
 *     5. ¡§c¡¨: Let user input specific seats (e.g. ¡§1-2¡¨), validate, display ¡¥@¡¦,
 *        then commit on confirmation.
 *     6. ¡§d¡¨: Ask ¡§Continue? (y/n)¡¨, loop or exit accordingly.
 *
 * Reflection and Discussion:
 *   Writing this project taught me how to manage 2D arrays, randomization,
 *   user input validation, and clear-screen techniques across platforms. I learned
 *   to structure menu-driven programs with clear modular functions and comments.
 *
 *   Discussion:
 *   - The use of a 2D int array simplifies seat state management (0 = free,
 *     1 = reserved).
 *   - Suggestions are tracked separately until confirmed, avoiding partial
 *     state changes.
 *   - Random seat assignment balances simplicity and user expectations, though
 *     in a real system, more intelligent algorithms would be required.
 *   - Input validation is critical: both scanf return values and range checks
 *     are used to prevent invalid operations.
 *
 *   Reflections:
 *   1. Ensuring a clear user interface (ASCII-art, prompts) improves usability.
 *   2. Modular functions (display, init, show, options) keep code readable and
 *      maintainable.
 *   3. Handling edge cases (three failed password attempts, invalid menu choices,
 *      seat conflicts) strengthens program robustness.
 *   4. Future improvements could include persistent storage (file I/O), a GUI,
 *      or a web-based interface.
 */
