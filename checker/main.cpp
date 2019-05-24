#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
string readData(const string &path){
    ifstream fin;
    fin.open(path, ios::binary);
    vector<char> buffer(istreambuf_iterator<char>(fin), {});
    string res;
    for(auto c:buffer) res +=c;
    return res;
}
int main(int argc, char *argv[]){
    if(argc<=2){
        cout<<"Need 2 input files.\n";
        return 0;
    }
    string origin = readData(argv[1]);
    string compress = readData(argv[2]);
    cout << "Your compression ratio is: " << compress.size()*100.0/origin.size() << "%\n";
    return 0;
}
