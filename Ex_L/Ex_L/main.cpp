
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int A,B,C;
    cin>>A>>B>>C;
    if (A>=B && A>=C ) { //A is Learg Number
        if(B>C){
            cout<<C<<" "<<A<<endl;

        }else{
            cout<<B<<" "<<A<<endl;
        }

    }else if(B>=A &&B>=C){
        if(A>C){
            cout<<C<<" "<<B<<endl;

        }else{
            cout<<A<<" "<<B<<endl;
        }
        
    }else if(C>=A&&C>=B){
        if(A>B){
            cout<<B<<" "<<C<<endl;

        }else{
            cout<<A<<" "<<A<<endl;
        }
    }
    
}
