/*
给你一个字符串 s 和一个字符规律 p，请你来实现一个支持 '.' 和 '*' 的正则表达式匹配。

'.' 匹配任意单个字符
'*' 匹配零个或多个前面的那一个元素
所谓匹配，是要涵盖 整个 字符串 s的，而不是部分字符串。

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/regular-expression-matching
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


#include "stdio.h" // 包含输入输出标准库
#include "stdbool.h"    

bool isMatch(char * s, char * p){
    return s[0]=='\0'&&p[0]=='\0'|| 
    s[0]!='\0'&&p[0]!='\0'&&(p[0]=='.'||p[0]==s[0])&&(p[1]=='*'?isMatch(s+1,p):isMatch(s+1,p+1))|| 
    
    p[0]!='\0'&&p[1]=='*'&&isMatch(s,p+2);

}

int main() {

    char* s ="aaaaaaaaaaaaab";
    char* p = "a*a*a*a*a*a*a*a*a*a*c";
    if(isMatch(s, p)) {
        printf("hello world");
    }
    return 0;
}