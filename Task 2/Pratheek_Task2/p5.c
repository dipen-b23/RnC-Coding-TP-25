#include<stdio.h>
//Function to check and print Index
void indexcheck(char str1[1000],char str2[1000], int count1, int count2){
    for(int i=0;str2[i]!=0;i++){
      if(str2[i]==' '&&str2[i+1]==' '){
          break;
      }  
          count2++;
    }
    for(int i=0;i<count1;i++){
        if(str1[i]==str2[0] && str1[i-1]==' '){
          int flag=0;
          for(int j=0;j<count2;j++){
              if(str1[i+j]==str2[j]){
              flag=1;
              
              }
          }
          if(flag==1){
              printf("Given substring is at index: %d\n", i);
          }
        }
    }
   
}

//Function to delete substring from string and print string
void deletesub(char str1[1000],char str2[1000], int count1, int count2){
    for(int i=0;i<count1;i++){
        if(str1[i]==str2[0] && str1[i-1]==' '){
          int flag=0;
          for(int j=0;j<count2;j++){
              if(str1[i+j]==str2[j]){
              flag=1;
              
              }
          }
          if(flag==1){
              for(int k=i;str1[k]!='\0';k++){
                  str1[k]=str1[k+count2] ;
              }
          }
        }
    }
     
    printf("\n");
    puts(str1);
    
}

int main(){
    char str1[1000],str2[1000];
    int count1=0,choice;
    puts("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    for(int i=0;str1[i]!=0;i++){
      if(str1[i]==' '&&str1[i+1]==' '){
          break;
      }  
          count1++;
    }
    int count2=0;
    puts("Enter a substring: ");
    fgets(str2, sizeof(str2), stdin);
    for(int i=0;str2[i]!=0;i++){
      if(str2[i]==' '&&str2[i+1]==' '){
          break;
      }  
          count2++;
    }
    
    //Giving menu to choose function
    printf("Enter 0 If you want to check index at which substring is present\n");
    printf("Enter 1 If you want to delete the substring\n");
    printf("Your choice: ");
    scanf("%d", &choice);
    
    
    switch(choice){
        case 0:
        indexcheck(str1,str2,count1,count2);
        break;
        case 1:
        deletesub(str1,str2,count1,count2);;
        break;
    }
    
    
    return 0;
}