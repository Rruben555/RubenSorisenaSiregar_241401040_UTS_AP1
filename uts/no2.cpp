#include <iostream>
using namespace std;

int main(){
   string kb;
   int hasil=0;   
   int biner=1;
   cout<<"Input kode biner: ";
   cin>>kb;

    for(int j=kb.length()-1; j>=0; j--){
        if (kb[j]=='1' || kb[j]=='0'){
            if (kb[j]=='1'){
                hasil+=biner;
            }
            biner*=2;
        }
        else{
            cout<<"Pesan Rusak!";
            goto a;
        }
    }

    cout<<"Angka desimal dari biner "<<kb<<" adalah "<<hasil;
    a:
    getchar();
}