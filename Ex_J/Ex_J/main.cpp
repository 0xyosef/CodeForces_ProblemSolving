//
//  main.cpp
//  Ex_J
//
//  Created by Yosef Joo on 19/03/2022.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int A,B;
    cin>>A>>B;
    if (A%B==0 || B%A==0) {
        cout<<"Multiples"<<endl;
    }
        cout<<"No Multiples";
    return 0;
}
