#include<string>
#include"encode.h"
using namespace std;
string encode(const string &data){
    string res; //�n�^�Ǫ�����
    unsigned sameCnt = 0; //�p��{�b�r�����Ƴs��X�{������
    for(size_t i = 0; i < data.size(); ++i){
        if( i && data[i] == data[i-1] ){
            ++sameCnt;
        }else{
            //�o�{�{�b���r���M�e�@�Ӧr�����@�˪��ɭԸӫ��O?
            sameCnt = 1;
        }
    }
    if( sameCnt > 0 ){
        //���n�ѰO�B�z�̫�@�Ӧr��
    }
    return res;
}
