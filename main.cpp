#include<iostream>
#include<map>
#include<string>
#include<fstream>
using namespace std;

struct wordInfo{
    int count;
    double sum;
    wordInfo(){
        count=0;
        sum=0;
    }
};
typedef map<string,wordInfo> dict_type;
bool prepare_input(string& fname,ifstream& inFile);
void compute(const string& outFileName,dict_type& map);
int main(int argc,char* argv[]) {
    dict_type myDictionary;
    string fname;
    ifstream inFile;

    if(argc>1)
        fname=argv[1];
    if(false== prepare_input(fname,inFile))
        return 1;
    string name;
    double value;
   while(inFile>>name&&inFile>>value){
       wordInfo& currInfo=myDictionary[name];
       if(currInfo.count==0){
           currInfo.count=1;
           currInfo.sum=value;
       }else{
           currInfo.count+=1;
           currInfo.sum+=value;
       }
   }
   compute(fname,myDictionary);
   return 0;
}

bool prepare_input(string& fname,ifstream& inFile){
    if(fname.empty()){
        cout<<"Please input file path to read: "<<endl;
        if(!(cin>>fname)){
            cerr<<"ERROR";
            return false;
        }
    }
    inFile.open(fname.c_str());
    if(!(inFile.good())){
        cerr<<"ERROR:can't open file ["
            <<fname
            <<"].\n";
        return false;
    }
    return true;
}
void compute(const string& outFileName,dict_type& map){
    double whole_value=0,whole_count=0;
    string ofname=outFileName+".out.txt";
    ofstream of(ofname.c_str());
    of<<"按名字小计: "<<endl;
    for(dict_type::iterator it=map.begin();it!=map.end();it++){
        of<<"   "<<it->first
          <<"   总和="
          <<it->second.sum
          <<",  平均数="
          <<(it->second.sum/it->second.count)
          <<endl;
        whole_value+=it->second.sum;
        whole_count+=it->second.count;
    }
    of<<"总计:"<<endl
      <<"   总和="<<whole_value
      <<",  平均数="<<whole_value/whole_count<<endl;

}