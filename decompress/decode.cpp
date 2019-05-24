#include<string>
#include<cctype>
using namespace std;
string decode(const string &data){
    string res; //要回傳的答案
    int cnt=0; //某個字元會出現幾次
    for(size_t i = 0; i < data.size(); ++i){
        if(isdigit(data[i])){
            cnt = cnt * 10 + data[i] - '0';
        }else{
            if( cnt == 0 ){
                // 如果data[i]的前面沒有數字代表什麼?
            }else{
                // 如果data[i]出現cnt次的話該怎麼做呢?
            }
            cnt = 0;
        }
    }
    return res;
}