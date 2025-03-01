#include <stdio.h>

void pointersExplanation() {
    int num;
    printf("enter a number: ");
    scanf("%d",&num);

    int *ptr = &num;

    /* ====alternative====
    int *ptr;
    ptr = &num
    *ptr= dereference operation
    */
    
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Pointer ptr stores address: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);

}
void arrayDef(){
    int a[100];
    printf("\n===============\n");
    printf("Size of Array: ");
    int size_arr;
    scanf("%d",&size_arr);
    for(int i=0; i<size_arr;i++){
        printf("enter the array[%d] value : ",i);
        scanf("%d",&a[i]);
    }
    printf("\nPrinting the values of the array\n");
    for(int i=0; i<size_arr;i++){
        printf(" %d, ",a[i]);
    }
}

void PtrAndArr(){
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  
    printf("Value of arr: %p\n", arr);
    printf("Address of first element: %p\n", &arr[0]);
      
    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d, Address = %p\n", i, *(ptr + i), (ptr + i));
    }
}
void main(){
    pointersExplanation();
    arrayDef();
    PtrAndArr();
}