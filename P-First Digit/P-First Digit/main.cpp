//
//  main.cpp
//  P-First Digit
//
//  Created by Yosef Joo on 08/05/2022.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int numberTest;
    cin>>numberTest;
    int reslt=numberTest/1000;
    if (reslt %2==0)
        cout<<"EVEN";
    else
        cout<<"ODD";
    return 0;
}
