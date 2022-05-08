//
//  main.cpp
//  Ex_H
//
//  Created by Yosef Joo on 13/03/2022.
//
#include <iostream>
using namespace std;
#include <cmath>

int main(int argc, const char * argv[]) {
    // insert code here...
    double n1,n2;
    cin>>n1>>n2;
    double result=n1/n2;
    cout<<"floor "<<n1<<" / "<<n2<<" = "<<floor(result)<<endl;
    cout<<"ceil "<<n1<<" / "<<n2<<" = "<<ceil(result)<<endl;
    cout<<"round "<<n1<<" / "<<n2<<" = "<<round(result)<<endl;
    return 0;
}
