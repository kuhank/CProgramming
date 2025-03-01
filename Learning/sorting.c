#include<stdio.h>

void NumberSorting(char sortOrder){
    int a[100], i, tmp;
    printf("Enter the total number element to be sorted: ");
    scanf("%d",&i);
    printf("\n====Enter %d element=====\n", i);
    for (int n = 0; n<i;n++){
        printf("enter the array[%d] value: ", n);
        scanf("%d",&a[n]);
    }
    for (int j =0; j<i-1 ; j++){
        for (int k=j+1; k<=i-1; k++){
			if (sortOrder=='A'){
				if(a[j]>a[k]){
					tmp = a[j];
					a[j]=a[k];
					a[k]=tmp;
				}
			}
			else if (sortOrder=='D'){
				if(a[j]<a[k]){
					tmp = a[j];
					a[j]=a[k];
					a[k]=tmp;
				}
			}
			else{
				printf("Not a Valid Sort Option\n");
			}
        }
    }
    printf("\nSorted Array\n");
    for (int n = 0; n<i;n++){
        printf("\nelement in array[%d]: ",n);
        printf("%d",a[n]);
    }
}

void wordSorting(){

}

void main(){
	char c;
	printf("Enter Asc order ('A') or Des Order ('D'): ");
	scanf("%c",&c);
	if (c != 'A' && c != 'D'){
		printf("Not a Valid Options");
	}
	else{
    NumberSorting(c);
	}
}