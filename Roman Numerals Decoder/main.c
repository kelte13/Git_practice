#include <stdio.h>
#include <string.h>
#include <stdlib.h>
unsigned decode_roman (const char *roman_number)
{
    int lennght = strlen(roman_number) + 1;
    int *arr = calloc(lennght, sizeof(int));
    for (int i = 0; i < lennght; i++) {
        switch (roman_number[i]) {
            case ('M'):
                arr[i] = 1000;
                break;
            case ('D'):
                arr[i] = 500;
                break;
            case ('C'):
                arr[i] = 100;
                break;
            case ('L'):
                arr[i] = 50;
                break;
            case ('X'):
                arr[i] = 10;
                break;
            case ('V'):
                arr[i] = 5;
                break;
            case ('I'):
                arr[i] = 1;
                break;
        }
    }
    int result = 0;
    for (int i = 0; i < lennght - 1; i++) {
        if (arr[i] >= arr[i+1]) {
            result += arr[i];
        }
        else {
            result = result + (arr[i+1] - arr [i]);
            i++;
        }
    }
    free(arr);
    return result;
}
//https://www.codewars.com/kata/51b6249c4612257ac0000005
