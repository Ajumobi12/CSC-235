#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define maxlines 100
#define maxlen 100
int main(){

    char data[maxlines][maxlen];
    FILE*file;

    file = fopen("Adamm.txt", "r");
    if(file==NULL){
        printf("Error opening");
        return 1;
    }

    int line =0;
    while(!feof(file) && !ferror(file))
        if (fgets(data[line], maxlen, file) != NULL)
        line++;
    fclose(file);

    for(int i=1; i<line; i++){
        int j;

       int ln = strlen(data[i]);



        int count=0;
            for(j=0; j<ln; j++){
                if((data[i][j] == 'U' ) ){
                    count+=1;
                }else break;

            }
            printf("%d\n", count);
    }
    return 0;

}
