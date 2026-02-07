#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int shuffleNumber(int input) { 
    char numberStr[20];
    sprintf(numberStr, "%d", input);
    int length = strlen(numberStr);

    char *resultStr = malloc(length + 1);
    if (resultStr == NULL) {
        return -1;
    }

    int left = 0, right = length - 1, pos = 0;
    int turn = 0; // 0: take from the left, 1: take from the right

    while (left <= right) {
        if (turn == 0) {
            resultStr[pos++] = numberStr[left++];
        } else {
            resultStr[pos++] = numberStr[right--];
        }
        turn = 1 - turn; //left to right or right to left
    }

    resultStr[pos] = '\0';
    int finalResult = atoi(resultStr);
    free(resultStr); 
    
    return finalResult;
}