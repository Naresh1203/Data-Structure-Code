#include <stdio.h>

int ver, matrix[100][100];  // Global variables

int accept() {
    int i, j;

    printf("\nEnter the No. of vertices:");
    scanf("%d", &ver);

    printf("\nEnter the adjacency matrix:\n");
    for (i = 0; i < ver; i++)
        for (j = 0; j < ver; j++)
            scanf("%d", &matrix[i][j]);

    return 0;  // Return statement added
}

void display() {
    int i, j;

    printf("\nTwo Dimensional array\n");
    for (i = 0; i < ver; i++) {
        printf("\tV%d", i);
    }
    printf("\n");
    for (i = 0; i < ver; i++) {
        printf("V%d\t", i);
        for (j = 0; j < ver; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void degree() {
    int i, j, in, out, total;

    for (i = 0; i < ver; i++) {
        in = out = total = 0;
        for (j = 0; j < ver; j++) {
            if (matrix[i][j] != 0) {
                out += matrix[i][j];
            }
            if (matrix[j][i] != 0) {
                in += matrix[j][i];
            }
        }
        total = in + out;
        printf("\nVertex V%d: In-Degree = %d, Out-Degree = %d, Total Degree = %d\n", i, in, out, total);
    }
}

int main() {
    int ch;

    do {
        printf("\n1. Accept 2. Display 3. Degree 0. Exit\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                accept();
                break;
            case 2:
                display();
                break;
            case 3:
                degree();
                break;
        }
    } while (ch != 0);

    return 0;
}
