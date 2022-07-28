#include "stdio.h"
#include<stdbool.h>
#include "string.h"
#include "stdlib.h"

char * longestCommonPrefix(char ** strs, int strsSize);

int main() {
    char *strs[5]={"china", "chi", "chin"};
    char** p2 = &strs;
    printf("%s",longestCommonPrefix(p2, 5));
}

char * longestCommonPrefix(char ** strs, int strsSize){
    for (int i = 0; i < strsSize; i++)
    {
        printf("%s\n", strs[i]);
    }
    
    int i = 0;
    printf("%d",i);
    // 循环对比每个字符串的相同位置字符是否相同
    for (;; i++){
        printf("%d",i);
        for (int j = 1; j < strsSize; j++){
            printf("%d",j);
            if (strs[j][i] == '\0' || strs[j][0] != strs[j][i])
            {
                printf("%d  %d", j, i);
                strs[0][i] = '\0';
                break;
            }
        }
        break;

    }
    return strs[0];
}