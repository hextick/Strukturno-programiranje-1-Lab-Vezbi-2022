#include <stdio.h>
int main(){
    int a[100],n,k,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++){
        if(a[i]<k){
            printf("%d ",a[i]);
        }
    }
    for(i=0;i<n;i++){
        if(a[i]>=k) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
//Од тастатура се внесува низа од целобројни елементи А со должина N ( N <= 100). Дополнително се внесува и број К.
//Да се трансформира низата така што на почеток ќе се преместат сите елементи помали од K, а после нив ќе следуваат броевите поголеми или еднакви на K.
//Редоследот на елементите да не се менува.
//Испечатете ги елементите на трансформираната низа во еден ред на стандарден излез разделени со празно место.