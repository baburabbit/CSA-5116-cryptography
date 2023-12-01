#include <stdio.h>
#include <string.h>

// Function to encrypt a message using column cipher
void encryptColumnCipher(char message[], int key) {
    int len = strlen(message);
    char cipher[key][(len / key) + 1];
    int k = 0;

    for (int i = 0; i < key; i++) {
        for (int j = 0; j < (len / key) + 1; j++) {
            if (k < len)
                cipher[i][j] = message[k++];
            else
                cipher[i][j] = 'X';
        }
    }

    printf("Encrypted Message: ");
    for (int i = 0; i < (len / key) + 1; i++) {
        for (int j = 0; j < key; j++) {
            printf("%c", cipher[j][i]);
        }
    }
    printf("\n");
}

int main() {
    char message[100];
    int key;

    printf("Enter the message to encrypt: ");
    scanf("%[^\n]s", message);

    printf("Enter the key: ");
    scanf("%d", &key);

    encryptColumnCipher(message, key);

    return 0;
}

