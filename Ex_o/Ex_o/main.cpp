//
//  main.cpp
//  Ex_o
//
//  Created by Yosef Joo on 20/03/2022.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    char s;
    int n1,n2,r;
    cin>>n1>>s>>n2;
    switch (s){
        case '+':
            r=n1+n2;
            break;
        case '*':
            r=n1*n2;
            break;
    
        case '/':
            r=n1/n2;

            break;
        case '-':
            r=n1-n2;

            break;
    }
       cout<<r;
    return 0;
}
