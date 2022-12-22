#include <stdio.h>

//Да се дефинираат функциите:
//divisibleByK (int number, int k) - која ќе враќа 1 доколку бројот k е делител на бројот number, a 0 во спротивно
//nextDivisibleByK (int number, int k) - која ќе го врати првиот број поголем од number кој е делив со k. 
//Да се употреби повик до divisibleByK во ова функција.
//Да не се менува main функцијата!
//Објаснување на примерот: Во секоја линија лево од стрелката се печати секој број од интервалот од [10,20], 
//а десно од стрелката се печати наредниот број поголем од бројот лево којшто е делив со бројот k.

int divisibleByK(int num, int k){
        if(num%k==0) return 1;
        else return 0;
}
int nextDivisibleByK(int num,int k){
    if(divisibleByK(num+1,k)) return num+1;
    else return nextDivisibleByK(num+1,k);
}


int main() {

    int a, b, k;
    scanf("%d %d %d", &a, &b, &k);

    for (int i = a; i <= b; i++) {
        printf("%d -> %d\n", i, nextDivisibleByK(i, k));
    }

    return 0;
}
