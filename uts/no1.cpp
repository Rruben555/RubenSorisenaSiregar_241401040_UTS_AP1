#include <iostream>
using namespace std;

int main(){
    float n;
    cout<<"kode: ";
    cin>>n;

    while(n>=2){
        n=n/2;
    };

    if (n==1){
        cout<<"ya";
    }
    else{
        cout<<"bukan";
    }
    getchar();
}