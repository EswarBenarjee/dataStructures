#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int list[100] = {1, 2, 3, 4, 5}, n = 0, i;

void insert(int data) {
    list[n++] = data;
}

void posinsert(int data, int pos) {
    if(pos > n) {
        printf("\nPosition greater than number of elements");
        return;
    }
    for(i = n-1; i >= pos; i--) {
        list[i+1] = list[i];
    }
    list[pos] = data;
    printf("\nInserted Data successfully");
    n++;
}

void posdel(int pos) {
    if(pos > n) {
        printf("\nElement not found");
        return;
    }
    int d = list[pos];
    for(i = pos; i <= n; i++) {
        list[i] = list[i+1];
    }
    printf("\nElement %d deleted successfully", d);
    n--;
}

void datadel(int d) {
    int flag = 0;
    for(i = 0; i < n; i++) {
        if(list[i] == d) {
            flag = 1;
            posdel(i);
        }
    }
    if(flag == 0)
        printf("Element not found");
}

void display() {
    printf("\n");
    for(i = 0; i < n; i++) {
        printf("%d ", list[i]);
    }
}

int main() {
    int ch, d, p;
    while(1) {
        printf("\nEnter your operation");
        printf("\n1.Insert 2.Insert using position");
        printf("\n3.Delete using position");
        printf("\n4.Delete using data");
        printf("\n5.Display 6.Exit");
        scanf("\n%d", &ch);
        if(ch == 6) {
            break;
        }
        switch(ch) {
            case 1:
                printf("\nEnter the data");
                scanf("%d", &d);
                insert(d);
                break;
            case 2:
                printf("\nEnter the data");
                scanf("%d", &d);
                printf("Enter the position");
                scanf("%d", &p);
                posinsert(d, p);
                break;
            case 3:
                printf("\nEnter the position to delete");
                scanf("%d", &p);
                posdel(p);
                break;
            case 4:
                printf("\nEnter the data to delete");
                scanf("%d", &d);
                datadel(d);
                break;
            case 5:
                display();
                break;
            default:
                printf("\nInvalid option");
        }
    }
    return 0;
}