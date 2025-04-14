#include <iostream>
using namespace std;

int main(){
    string mantra;
    int vokal=0;
    int i=0;

    cout<<"Mantra: ";
    getline(cin, mantra);
    
    while(i<mantra.length()){
        mantra[i]=toupper(mantra[i]);
        if (mantra[i]=='A' || mantra[i]=='I' ||mantra[i]=='U' ||mantra[i]=='E' || mantra[i]=='O' ){
        vokal++;
        }
        i++;
    }
    if (vokal==0){
        cout<<"Mantra tidak valid";
    }else{
        cout<<"Kekuatan mantra: "<<vokal<<" vokal";
    }
    getchar();
}