//โจทย์ชื่อจริง-นามสกุล-เพศ

#include <stdio.h>
#include <string.h>

int main() {
    char n[50], sn[501], gen[10];
    char FN[100];

    printf(" Name: ");
    scanf("%s", n);

    printf("Surname: ");
    scanf("%s", sn);

    printf("Gender: ");
    scanf("%s", gen);

    if (strcmp(gen, "Male") == 0 || strcmp(gen, "male") == 0) {
        strcpy(FN, "Mr.");
    } else if (strcmp(gen, "Female") == 0 || strcmp(gen, "female") == 0) {
        strcpy(FN, "Mrs.");
    } else {
        printf("error.\n");
        return 1;
    }

    strcat(FN, n);
    strcat(FN, " ");
    strcat(FN, sn);

    printf("Full-Name : %s\n", FN);

    return 0; 
}
