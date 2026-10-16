#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<locale.h>

int main(){
int A,B,C,flag = 0;
setlocale(LC_ALL, "RUS");
puts("Введите вес груза A,B,C");
scanf("%d%d%d",&A,&B,&C);
if(A%5==0) {
    if(B%5==0){
        if(C%5==0){
            printf("Погрузка разрешена");
            flag = 1;
        }
    }
    
}
if(flag==0) printf("Погрузка запрещена");
return 0; 
}