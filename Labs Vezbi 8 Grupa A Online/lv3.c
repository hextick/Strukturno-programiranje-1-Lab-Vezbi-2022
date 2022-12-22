#include <stdio.h>

//Да се прочита број N од тастатура. Да се дефинира функција form(int n) што ќе испечати форма од ѕвезди како што е прикажано на сликата.
//За да се освојат сите поени од вежбата, потребно е функцијата form да биде рекурзивна.

void pecati(int n){
    for(int i =0;i<n;i++){
        for(int j=n;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
}
void pecatiRekurzivna(int n){
    for(int i=0;i<n;i++){
        printf("*");
    }
    printf("\n");
    pecatiRekurzivna(n-1);
}
int main() {
    int n;
    scanf("%d",&n);
    pecatiRekurzivna(n);
    return 0;
}
