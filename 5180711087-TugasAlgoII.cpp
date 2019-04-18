#include <iostream>
using namespace std;
int x,y;
struct mdl{int x,y;};
struct mdl us;
double dls(){
 cout<<"masukan nilai : ";cin>>us.x;
 cout<<"masukan nilai pembagi : ";cin>>us.y;};

double rumus(){
double hasil;
    if(us.x==0)
      return 0;
    else if(us.x>=0){
        hasil=us.x%us.y;}
    else if (us.x<=0){
        hasil=us.x%us.y;}
cout<<"Sisa Hasil : "<<hasil;
};

main(){
int a,b;
cout<<"Nama  : Panji Muhammad Guntur"<<endl;
cout<<"NIM   : 5180711087"<<endl;
cout<<"Prodi : S1 Teknik Elektro"<<endl;
cout<<"<<==============================>>"<<endl;
cout<<"<===POSITIF===>";cout<<endl;
dls();
rumus();
cout<<endl<<endl;
cout<<"<===NEGATIF===>";cout<<endl;
dls();
rumus();
cout<<endl<<endl;
};
