#include <stdio.h>
#include <stdlib.h>

void init();
void insert();
void display();
void delete_element();
void search();
int ht[10];

int main() {
    int choice;
    init();
    
    while(1) {
        printf("\n**menu**\n");
        printf("1. Init\n");
        printf("2. Insert\n");
        printf("3. Display\n");
        printf("4. Delete\n");
        printf("5. Search\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
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
                delete_element();
                break;
            case 5:
                search();
                break;
            case 6:
                exit(0);
            default:
                printf("\nInvalid choice\n");
        }
    }
    return 0;
}

void init() {
    for(int i = 0; i < 10; i++)
        ht[i] = -1;
}

void insert() {
    int n, b, i, s, len = 0, posn, s1;
    printf("\nEnter element to insert: ");
    scanf("%d", &n);
    s = n * n;
    s1 = s;
    
    while(s != 0) {
        len++;
        s /= 10;
    }
    
    if(len % 2 == 0)
        posn = len / 2;
    else
        posn = len / 2 + 1;
    
    for(i = 0; i < posn; i++)
        s1 /= 10;
    
    if(len == 2)
        b = 0;
    else
        b = s1 % 10;

    if(ht[b] == -1) {
        ht[b] = n;
        printf("\nElement %d inserted into bucket %d\n", n, b);
    } else {
        for(i = (b + 1) % 10; i != b; i = (i + 1) % 10) {
            if(ht[i] == -1) {
                ht[i] = n;
                printf("\nElement %d inserted into bucket %d\n", n, i);
                return;
            }
        }
    }
    printf("\nHash table is full\n");
}

void display() {
    printf("\nHash table:\n");
    for(int i = 0; i < 10; i++) {
        if(ht[i] == -1)
            printf("Bucket %d: Empty\n", i);
        else
            printf("Bucket %d: %d\n", i, ht[i]);
    }
}

void delete_element() {
    int n;
    printf("\nEnter element to delete: ");
    scanf("%d", &n);
    for(int i = 0; i < 10; i++) {
        if(ht[i] == n) {
            ht[i] = -1;
            printf("\nElement %d deleted from bucket %d\n", n, i);
            return;
        }
    }
    printf("\nElement not found\n");
}

void search() {
    int n;
    printf("\nEnter element to search: ");
    scanf("%d", &n);
    for(int i = 0; i < 10; i++) {
        if(ht[i] == n) {
            printf("\nElement %d found at bucket %d\n", n, i);
            return;
        }
    }
    printf("\nElement not found\n");
}

