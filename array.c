#include <stdio.h>
//Global Declaration of array
int arr[100], n, i;

void print() {
    printf("\nArray elements are: ");
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}
    
int main()
{
    printf("Enter number of elements");
    scanf("%d", &n);
    
    //Initialization of array
    printf("Enter array elements");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    print();
    
    //Updating Array elements
    arr[5] = 11;
    
    //Printing array
    print();
    
    //Deleting an element in array
    arr[0] = 0;
    
    //Printing array
    print();
    
    return 0;
}
