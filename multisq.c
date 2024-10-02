#include <stdio.h>
#include <stdlib.h>

void init();
void insert();
void display();
void delete_element(); // Renamed from delete()
void search();

int ht[10];

int main() { // Changed return type from void to int
    int n;
    init();
    while (1) {
        printf("\n**menu**\n");
        printf("\n1.init \n2.insert \n3.display \n4.delete \n5.search \n6.exit\n");
        printf("enter your choice=");
        scanf("%d", &n);
        switch (n) {
            case 1:
                init();
                break;
            case 2:
                insert();
                break;
            case 3:
                display();
                break;
            case 4:
                delete_element(); // Changed from delete()
                break;
            case 5:
                search();
                break;
            case 6:
                exit(0);
            default:
                printf("\n invalid choice\n");
                exit(0);
        }
    }
    return 0;
}

void init() {
    int i;
    for (i = 0; i < 10; i++)
        ht[i] = -1;
}

void insert() {
    int n, b;
    printf("\nenter element to insert = ");
    scanf("%d", &n);
    b = n % 10; // Simple modulo operation to get the bucket index
    if (ht[b] == -1) {
        ht[b] = n;
        printf("\n element %d inserted in %d bucket", n, b);
    } else {
        printf("\n Collision occurred, element not inserted");
    }
}

void display() {
    int i;
    printf("\n hash table\n");
    for (i = 0; i < 10; i++) {
        if (ht[i] == -1) {
            printf("\n bucket %d empty", i);
        } else {
            printf("\n bucket %d = %d", i, ht[i]);
        }
    }
}

void delete_element() {
    int n, b;
    printf("\n enter element to delete = ");
    scanf("%d", &n);
    b = n % 10; // Simple modulo operation to get the bucket index
    if (ht[b] == n) {
        ht[b] = -1;
        printf("\n element %d deleted from %d bucket", n, b);
    } else {
        printf("\n element not found in bucket %d", b);
    }
}

void search() {
    int n, b;
    printf("\nenter the element to be searched = ");
    scanf("%d", &n);
    b = n % 10; // Simple modulo operation to get the bucket index
    if (ht[b] == n) {
        printf("\n element %d found at bucket %d", n, b);
    } else {
        printf("\n element not found in bucket %d", b);
    }
}

