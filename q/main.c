#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str_in = "kthzkzzkjkzkhhqjttqwtwtztzjtthzkj";
    printf("%s\n", str_in);
    int lenght = 0;
    while (str_in[lenght] != '\0') {
        lenght++;
    }
    int count = 0;
    int count_odd = 0;
    char char_odd = '0';
    for (int i = 0; i < lenght; i++) {
        for (int j = 0; j < lenght; j++) {
            if (str_in[i] == str_in[j]) {
               count++;
            }
        }
        if (count == 1) {
            char_odd = str_in[i];
            count_odd++;

        }
        else if (count%2 == 1) {
            char_odd = str_in[i];
            break;
        }
        count = 0;
    }
    if ((count_odd == 1) && (lenght%2 == 1)) {
        return 1;
    }
    for (int i = 0; i < lenght; i++) {
        for (int j = 0; j < lenght; j++) {
            if (str_in[i] == str_in[j]) {
               count++;
            }
        }
        if ((count%2 == 1) && (char_odd != str_in[i])) {
            char_odd = str_in[i];
            return 0;
        }
        count = 0;
    }
    return 1;
}
