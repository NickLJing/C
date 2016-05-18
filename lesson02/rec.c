#include <stdio.h>

int  refed(int count){
    fprintf(stdout,"递归算法开始，第%d次递归\n",count);
    int result = 0 ;
    if(count == 0){
        fprintf(stdout,"迭代错误");
        result = 0;
    }else if(count == 1){
        result = 1;
    }else{
        result = refed(count-1);
    }
    return result;

}
