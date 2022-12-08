#include <stdio.h>
int main(){
    int a[100][100],n,najdolgoStrogoRastechka=0,brNaStrPodNiza=0,i,j;
    scanf("%d",n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]<a[i][j+1]){
                brNaStrPodNiza++;
            }
        }
        if(najdolgoStrogoRastechka<brNaStrPodNiza){
            najdolgoStrogoRastechka=brNaStrPodNiza;
        }
        brNaStrPodNiza=0;
    }
    printf("%d",najdolgoStrogoRastechka);
}
//Од стандарден влез се чита позитивен број n кој ги дава димензиите на квадратна матрица од цели броеви, која се чита во продолжение.
//Да се напише програма која за таа матрица(макс. 100 x 100) ќе ја испечати должината на најдолгата строго растечка подниза, 
//доколку матрицата ја гледаме ред по ред.
//На пример, ако е дадена следната матрица:
//1 2 3 9 8
//5 5 5 5 5
//0 1 2 0 0
//9 1 2 3 4
//1 1 1 1 1
//должината на најдолгата строго растечка подниза е 4, а тоа е должината на поднизата 1 2 3 4, во четвртиот ред.
//For example:
//Input	Result
//2
//1 2
//2 1
