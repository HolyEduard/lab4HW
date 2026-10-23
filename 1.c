#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<locale.h>

int main(){
int A,B,C,flag = 0;
setlocale(LC_ALL, "RUS");
puts("Введите вес ингридиентов A,B,C");
scanf("%d%d%d",&A,&B,&C);
if(A%3==0) {
    if(B%3==0){
        if(C%3==0){
            printf("Реакция запустится");
            flag = 1;
        }
    }
    
}
if(flag==0) printf("Реакция не запустится");
return 0; 
}