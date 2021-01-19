#include <iostream>
#include <string.h>

int main(void){
    //char buf[128];
    //scanf(%s,&buf)
    std::string s;
    std:: cin >> s;
    //printf("%s hogehoge");
    if((s[2] == s[3]) && (s[4] == s[5])){
    std:: cout << "Yes\n";
    }
    else
    {
     std:: cout << "No\n";
    }
    return 0;
}