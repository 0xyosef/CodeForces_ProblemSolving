//
//  main.cpp
//  Ex_l_test
//
//  Created by Yosef Joo on 19/03/2022.
//


#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    string Fname1,Lname1,Fname2,Lname2;
    cin>>Fname1>>Lname1>>Fname2>>Lname2;
    if(Lname1==Lname2)
        cout<<"ARE Brothers"<<endl;
    else
        cout<<"NOT"<<endl;
}
