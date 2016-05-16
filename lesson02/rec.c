#include <stdio.h>

int  refed(int count){
    int result = 0 ;
    if(count == 0){
        fprintf(stdout,"迭代错误");
        result = 0;
    }else if(count == 1){
        result = 1;
    }else{
        result = refed(count-1);
        printf("当前第%d次迭代",result);
    }
    return result;

}
