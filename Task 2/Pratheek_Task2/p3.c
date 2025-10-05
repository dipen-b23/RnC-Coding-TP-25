#include<stdio.h>
int main(){
    char str[1000];
    int count=0,counta=0,counte=0,counti=0,counto=0,countu=0;
    puts("Enter a charecter: ");
    fgets(str, sizeof(str), stdin);
    for(int i=0;str[i]!=0;i++){
      if(str[i]==' '&&str[i+1]==' '){
          break;
      }  
          count++;
    }
    for(int i=0;i<count;i++){
        if(str[i]=='a')
        counta++;
        if(str[i]=='e')
        counte++;
        if(str[i]=='i')
        counti++;
        if(str[i]=='o')
        counto++;
        if(str[i]=='u')
        countu++;
    }
    printf("Frequency of a is: %d\n", counta);
    printf("Frequency of e is: %d\n", counte);
    printf("Frequency of i is: %d\n", counti);
    printf("Frequency of o is: %d\n", counto);
    printf("Frequency of u is: %d\n", countu);
    return 0;
}