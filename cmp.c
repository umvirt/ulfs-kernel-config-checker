#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[]){
if(argc != 3){
        printf("ERROR");
    }else{
	if (strcmp(argv[1],argv[2])==0){
                    printf("OK");
//            else if(strcmp(argv[1], printf('OK'))!=0)
//                    printf('FAIL')
            }else{
                    printf("FAIL");
	}
}
//printf(argv[0]);
//printf("OK");
return 0;
}
