#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf ("%d",&n);
    int sum=0;
    for (int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf ("%d",sum);

    return 0;
}