#include <stdio.h>
int main() {
    int a[100],n,i;
    scanf("%d",&n);
    for (i=0;i<n;i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0){
            a[i]++;
        }else{
            a[i]--;
	}
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
//Од стандарден влез да се вчита број N и потоа да се вчитаат N елементи во една низа.
//Внесената низа да се трансформира на начин што парните елементи ќе се зголемат за 1, а непарните ќе се намалат за 1.
//Трансформираната низа да се испечати на стандарден излез, така што елементите ќе се одвоени со празно место меѓу нив.

//For example:
//Input 	 Result
//5
//1 2 3 4 5  0 3 2 5 4