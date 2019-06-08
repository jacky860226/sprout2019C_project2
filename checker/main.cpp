#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
string readData(const string &path){
    ifstream fin;
    fin.open(path.c_str(), ios::binary);
    vector<char> buffer( (istreambuf_iterator<char>(fin)), istreambuf_iterator<char>() );
    string res;
    for(size_t i=0; i<buffer.size(); ++i) res +=buffer[i];
    return res;
}
int main(int argc, char *argv[]){
    if(argc<=2){
        cout<<"Need 2 input files.\n";
        return 0;
    }
    string origin = readData(argv[1]);
    string compress = readData(argv[2]);
    string decompress;
    if(argc>2){
    	decompress = readData(argv[3]);
    	if(origin != decompress){
    		cout<<"Wrong Answer!\n";
    		return 0;
		}
	}
    cout << "Your compression ratio is: " << compress.size()*100.0/origin.size() << "%\n";
    return 0;
}
