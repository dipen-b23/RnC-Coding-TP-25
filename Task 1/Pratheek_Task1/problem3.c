#include <stdio.h>

int main() {
    int a,b,c,SG,S1,S2;
    printf("Enter a Three Sides: ");
    scanf("%d%d%d", &a, &b, &c);
   
    if(a>=b && a>=c ){
        SG=a;
        S1=b;
        S2=c;

    }
    else if(b>=a && b>=c){
        SG=b;
        S1=a;
        S2=c;
    }
    else {
        SG=c;
        S1=b;
        S2=a;
    }
    if((SG*SG)==(S1*S1)+(S2*S2)){
        printf("Right Angled Triangled");
    }
    else {
        printf("Not a Right Angled Triangled");
    }
    return 0;
}


       
    