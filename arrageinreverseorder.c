#include <stdio.h>
#include <string.h>


void swapStrings(char *str1, char *str2) {
    char temp[100];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}


void reverseBubbleSort(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) < 0) {
                swapStrings(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of names: ");
    scanf("%d", &n);

    char names[n][100];

    printf("Enter %d names:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    reverseBubbleSort(names, n);

    printf("\nNames in reverse alphabetical order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
