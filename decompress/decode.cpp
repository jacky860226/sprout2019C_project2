#include<string>
#include<cctype>
#include"decode.h" 
using namespace std;
string decode(const string &data){
    string res; //�n�^�Ǫ�����
    int cnt=0; //�Y�Ӧr���|�X�{�X��
    for(size_t i = 0; i < data.size(); ++i){
        if(isdigit(data[i])){
            cnt = cnt * 10 + data[i] - '0';
        }else{
            if( cnt == 0 ){
                // �p�Gdata[i]���e���S���Ʀr�N����?
            }else{
                // �p�Gdata[i]�X�{cnt�����ܸӫ�򰵩O?
            }
            cnt = 0;
        }
    }
    return res;
}
