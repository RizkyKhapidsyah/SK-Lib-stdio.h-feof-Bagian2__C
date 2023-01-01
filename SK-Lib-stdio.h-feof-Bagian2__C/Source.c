#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* fp = fopen("test.txt", "r");
    int ch = getc(fp);

    while (ch != EOF) {
        putchar(ch);
        ch = getc(fp);
    }

    if (feof(fp)) {
        printf("\n End of file reached.");
    } else {
        printf("\n Something went wrong.");
    }
        
    fclose(fp);

    getchar();
    return 0;
}