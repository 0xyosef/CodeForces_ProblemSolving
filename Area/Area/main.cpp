//
//  main.cpp
//  Area
//
//  Created by Yosef Joo on 13/03/2022.
//

#include <iostream>
#include<iomanip>
using namespace std;
int main() {
    double pi=3.141592653;
    double r;
    cin>>r;
    cout << fixed <<setprecision(9)<<pi*r*r<<endl;
    return 0;
}
