//
//  main.cpp
//  Ex_N
//
//  Created by Yosef Joo on 19/03/2022.
//
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    char C;
    cin>>C;
    if(C>=97&&C<=122){
    cout <<(char)toupper(C)<<endl;
//    }else if(C>=65&&C<=90){
//        cout << "ALPHA"<<endl;
//        cout << "IS CAPITAL"<<endl;
    }else
        cout <<(char)tolower(C)<<endl;
    return 0;
}
