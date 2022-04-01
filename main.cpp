#include <iostream>
using namespace std;

int main(){
    int n=0;
    int prossimonumero;
    cin>>n;
    if(n>=2){
        int primonumero=0;
        int secondonumero=1;
        cout<<secondonumero<<"\n";
        for(int i=n; i>0; i--){
            prossimonumero=primonumero+secondonumero;
            primonumero=secondonumero;
            secondonumero=prossimonumero;
            cout<<prossimonumero<<"\n";
        }
    }else{
        cout<<"errore";
    }
    return 0;
}
