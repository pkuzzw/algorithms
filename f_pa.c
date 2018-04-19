#include<stdio.h>
int  main(int argc,char *argv[]){
    int i=0;
    for(;i<argc;i++){
      printf("%s\n",argv[i]);
    }
    char c=45;
    printf("%d\n",c);
    printf("%c\n",c);
    return 0;
    //printf("\n");
}
