#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include"decode.h"
using namespace std;
string readData(const string &path){
    ifstream fin;
    fin.open(path, ios::binary);
    vector<char> buffer(istreambuf_iterator<char>(fin), {});
    string res;
    for(auto c:buffer) res +=c;
    return res;
}
void writeData(const string &data, const string &path){
    ofstream fout;
    fout.open(path, ios::binary);
    fout.write(data.data(),data.size());
}
int main(int argc, char *argv[]){
    if(argc<=2){
        cout<<"Need input and output file.\n";
        return 0;
    }
    string input = readData(argv[1]);
    writeData(decode(input),argv[2]);
    return 0;
}