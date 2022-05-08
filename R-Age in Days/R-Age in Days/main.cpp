//
//  main.cpp
//  R-Age in Days
//
//  Created by Yosef Joo on 08/05/2022.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
//    1
//    1
//    5
    int Day;
    cin>>Day;
    int year=Day/365;
    Day-=365*year;
    int monuth=Day/30;
    Day -=30*monuth;
    cout<<year<<" years"<<endl;
    cout<<monuth<<" months"<<endl;
    cout<<Day<<" days"<<endl;
}
