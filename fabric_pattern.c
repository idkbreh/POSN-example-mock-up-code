// โจทย์ Generate ผ้าลายเป็นตัวอักษร ตัวโค้ดไม่สมบูรณ์เนื่องจากขาด Input ที่ 4 

#include <stdio.h>

int main() {
   // SETTING PART 
    char startChar;
    int numRows, numCols;
    
    // PART INPUT 
    printf("Enter the starting Charr (A-Z): ");
    scanf(" %c", &startChar);
    printf("Enter the number of Rows: ");
    scanf("%d", &numRows);
    printf("Enter the number of ColS: ");
    scanf("%d", &numCols);
    //PART CONDD
    if (startChar < 'A' || startChar > 'Z' || numRows < 1 || numCols < 1) {
        printf("Use A - Z only !!.\n");
        return 1;
    }//PART GENERATE USE LOOP OVL
    for (int i = 0; i < numRows; i++) {
        char currentChar = startChar;
        for (int j = 0; j < numCols; j++) {
            printf("%c ", currentChar);
            currentChar += 5;
            if (currentChar > 'Z') {
                currentChar = currentChar - 'Z' + 'A' - 1;
            }
        }
        printf("\n");
        startChar += 1;
        if (startChar > 'Z') {
            startChar = 'A';
        }
    }
    return 0; 
}
