#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[]){
if(argc != 3){
        printf("ERROR");
    }else{
        //if argumets are equal
        if (strcmp(argv[1],argv[2])==0){
            printf("OK");
            return 0;
        //in other cases
        }else{
                    //if option value is should be a module or part of kernel
                    if (strcmp(argv[2],"m/y")==0){

                        //allow module value
                        if (strcmp(argv[1],"m")==0){
                            printf("OK");
                            return 0;
                        }

                        //allow part of kernel value
                        if (strcmp(argv[1],"y")==0){
                            printf("OK");
                            return 0;
                        }
                    }

                    //in other cases
                    printf("FAIL");
            }
        }
    return 0;
}
