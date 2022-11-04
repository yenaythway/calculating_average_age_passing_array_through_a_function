#include <stdio.h>
#define SIZE 5
float total=0;
float average(float a[]);
int main() {
    float arrayname[SIZE];
    for (int i = 0; i < SIZE; i++) {
        printf("enter age:");
        scanf("%f",&arrayname[i]);
    }
    for(int i=0;i<SIZE;i++){
        printf("%f\n",arrayname[i]);
    }
    average(arrayname);
}
float average(float a[]){
    for (int i = 0; i < SIZE; i++) {
        total=total+a[i];
    }
    printf("%f",total);
    float average=total/SIZE;
    printf("\navarage age:%f",average);
}
