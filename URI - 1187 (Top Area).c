#include <stdio.h>

int main() {

    double m[12][12],sum = 0.0, t = 0.0;
    int i,j,k,l;
    char a[2];
    scanf("%s",&a);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&m[i][j]);
        }
    }

    int p=1;
    int q=11;

    for(k=0;k<=4;k++)
    {
        for(l=p;l<q;l++){
            sum = sum + m[k][l];
            t = t+1.0;
        }
        p++;
        q--;
    }


    if(a[0]=='S'){
        printf("%.1lf\n",sum);
    }
    else if(a[0]=='M'){
        printf("%.1lf\n",sum/t);
    }

    return 0;
}


