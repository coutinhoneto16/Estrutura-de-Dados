#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"qts?";
    cin>>n;
    vector<string> nomes;
    vector<int> idades;
    string x;
    int y;
    for(int i=0;i<n;i++){
        cout<<"nome:";
        cin>>x;
        cout<<"idade:";
        cin>>y;
        nomes.push_back(x);
        idades.push_back(y);
    }
    for(int i=0;i<n;i++){
        cout<<nomes[i]<<" "<<idades[i]<<endl;
    }
    int maior=0,pos=0;
    for(int i=0;i<n;i++){
        if(idades[i]>maior){
            maior=idades[i];
            pos=i;
        }
    }
    cout<<"mais velho:"<<nomes[pos]<<" "<<maior;
}