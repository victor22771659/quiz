/* FIXME: Implement! */
#include <stdio.h>
#include <stdlib.h>
char smallest_character_non_recursive(char str[],char c);
char str1[5]={'c','f','j','p','v'};
char str2[3]={'c','c','k'};
char input[5]={'a','c','z'};

int main(int argc,char* argv[]){
    int i=0;
    char result;
    for(i=0;i<3;i++){
        result=smallest_character_non_recursive(str1,input[i]);
        printf("If input is \'%c\' and str1,result is \'%c\'.\n",input[i],result);
    }
    result=smallest_character_non_recursive(str2,'f');
    printf("If input is \'f\' and str2,result is \'%c\'.\n",result);

    return 0;
}
char smallest_character_non_recursive(char str[],char c){
     int i=0;
     while(str[i]!='\0'){
         if(str[i]>c)
             return str[i];
         i++;    
     }
     return str[0];                            
}
