#include<stdio.h>
int main(){
    char str[1000];
    int count=0;
    puts("Enter a charecter: ");
    fgets(str, sizeof(str), stdin);
    for(int i=0;str[i]!=0;i++){
      if(str[i]==' '&&str[i+1]==' '){
          break;
      }  
          count++;
    }
    int flag=0;
    for(int i=0;i<count/2;i++){
          if(str[i]!=str[count-2-i]){
          flag=1;
          break;
          }
    }
    if(flag==0){
        printf("Palindrome\n");
    }
    if(flag==1){
        printf("Not Palindrome\n");
    }

    return 0;
}
