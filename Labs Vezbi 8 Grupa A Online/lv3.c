#include <stdio.h>

//Да се прочита број N од тастатура. Да се дефинира функција form(int n) што ќе испечати форма од ѕвезди како што е прикажано на сликата.
//За да се освојат сите поени од вежбата, потребно е функцијата form да биде рекурзивна.

void pecati(int num){
    if(num){
        for(int i = 0; i<n; i++){
            printf("*");
        }
        printf("\n");
        pecati(num-1);
    }
}
int main() {
    int N;
    scanf("%d",&N);
    pecati(N);
    return 0;
}
