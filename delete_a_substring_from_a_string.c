#include <stdio.h>
#include <string.h>
int main() {
    char str[100], sub[100];
    int i, j, k, lenStr, lenSub, found = 0;
    printf("Enter main string: ");
    gets(str);
    printf("Enter substring to delete: ");
    gets(sub);
    lenStr = strlen(str);
    lenSub = strlen(sub);
    for (i = 0; i <= lenStr - lenSub; i++) {
        found = 1;
        for (j = 0; j < lenSub; j++) {
            if (str[i + j] != sub[j]) {
                found = 0;
                break;
            }
        }
        if (found == 1) {
            for (k = i; k < lenStr - lenSub; k++) {
                str[k] = str[k + lenSub];
            }
            break;
        }
    }
    if (found == 1)
        printf("String after deletion: %s\n", str);
    return 0;
}