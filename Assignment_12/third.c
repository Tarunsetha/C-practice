//Q3>WAP which take the day number of the week and dispaly a unique greeting mesages for the day?
#include <stdio.h>
int main() {
    int day;
    printf("Enter day number (1-7): ");
    scanf("%d", &day);
    switch(day) {
        case 1: printf("Happy Monday! Start fresh.\n"); break;
        case 2: printf("Terrific Tuesday ahead!\n"); break;
        case 3: printf("Wonderful Wednesday vibes!\n"); break;
        case 4: printf("Thriving Thursday energy!\n"); break;
        case 5: printf("Fantastic Friday fun!\n"); break;
        case 6: printf("Superb Saturday chill!\n"); break;
        case 7: printf("Sunny Sunday rest!\n"); break;
        default: printf("Invalid day number.\n");
    }
    return 0;
}
