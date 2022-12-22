#include <stdio.h>

//Од тастатура се вчитуваат броевите A и B. На екран да се испечатат сите броеви од интервалот [A,B] кои се палиндроми и се составени само од цифрите 0,1,2,3 и 4. 
//Предлог за работа: 
//Да се имплементира функција reverseNumber (int number) која ќе го пресмета обратниот број на определен број number.
//Да се имплементира функција isPalindrome (int number) која ќе врати 1 доколку бројот number е палиндром, а 0 во спротивно
//Да се имплементира функција containsDigits (int number) која ќе врати 1 доколку сите цифри во бројот се 0,1,2,3 или 4, а 0 во спротивно. 
//Да се искористат функциите isPalindrome и containsDigits во main функцијата
//Дополнително: Направете ја функцијата containsDigits рекурзивна.

int reverseNumber(int num){
    int c=0;
    while(num){
        c=c*10+num%10;
        num/=10;
    }
    return c;
}

int containDigits(int num){
    if(num==0) return 1;
    if(num%10>4) return 0;
    return containDigits(num/10);
}
void isPalindrome(int num){
    if(num == reverseNumber(num) && containDigits(num))
        printf("%d\n",num);
}

int main() {
    int a,b;
    scanf("%d %d",&a, &b);
    for(int i=a;i<=b;i++){
        isPalindrome(i);
    }
    return 0;
}
