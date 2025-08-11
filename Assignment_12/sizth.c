// Q6>. Write a program to find and display grade obtained by a student in a test. Grading specifications are as follows:

// Marks from 90 to 100: Grade A

// Marks from 80 to less than 90: Grade B

// Marks from 70 to less than 80: Grade C

// Marks from 60 to less than 70: Grade D

// Marks from 50 to less than 60: Grade E

// Marks below 50: Grade F

// Marks greater than 100 or less than 0: Invalid Marks

#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if (marks > 100 || marks < 0) {
        printf("Invalid Marks\n");
        return 0;
    }
    switch (marks / 10) {
        case 10:
        case 9: printf("Grade A\n"); break;
        case 8: printf("Grade B\n"); break;
        case 7: printf("Grade C\n"); break;
        case 6: printf("Grade D\n"); break;
        case 5: printf("Grade E\n"); break;
        default: printf("Grade F\n");
    }
    return 0;
}
