#include <iostream>
#include <fstream>
using namespace std;
struct ogrenci{
string name;
int no;
int n1,n2,n3;
float ort;

};
int main() {
    ogrenci person;
    ifstream file("ogrenciler.txt");
    ofstream file2("ort.txt");
      if(file2.is_open()){
            cout<<"okey";
      }else{
      cerr<<"hata";
      }
    if(file.is_open()){
         while(file>>person.name>>person.no>>person.n1>>person.n2>>person.n3){
       float ort=(person.n1+person.n2+person.n3)/3;

        file2<<person.name<<"  ort: "<<ort<<endl;
         }
       }else{
       cerr<<"dosya açılmadı;";
       return 1;
       }

 file2.close();
  file.close();
    return 0;
}
