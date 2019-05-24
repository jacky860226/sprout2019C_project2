#include<string>
using namespace std;
string encode(const string &data){
    string res; //要回傳的答案
    unsigned sameCnt = 0; //計算現在字元重複連續出現的次數
    for(size_t i = 0; i < data.size(); ++i){
        if( i && data[i] == data[i-1] ){
            ++sameCnt;
        }else{
            //發現現在的字元和前一個字元不一樣的時候該怎辦呢?
            sameCnt = 1;
        }
    }
    if( sameCnt > 0 ){
        //不要忘記處理最後一個字元
    }
    return res;
}