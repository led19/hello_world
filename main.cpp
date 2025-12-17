#include<iostream>
using namespace std;

int testStringFunction(string str){
    
    for(auto it = str.begin(); it != str.end(); ++it){
        *it = toupper(*it);
        cout<<*it<<endl;
    }
    cout<<str<<endl;
    return 0;
}

int main(){
    cout<<"Hello World!"<<endl;
    testStringFunction("Test String");
    return 0;
}
