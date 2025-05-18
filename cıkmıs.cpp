//generate a dynemic array of size 25,ask to user to assing values to the array,sort the elements in ascending order and print the array as output
#include <iostream>

using namespace std;
void sortf(int* arr);
void write(int* arr);
int main(){
int* arr=new int[5];
for(int i=0;i<5;i++){
    cout<<"enter "<<i+1<<". number:"<<endl;
    cin>>*(arr+i);
}
cout<<"sirali : "<<endl;
sortf(arr);
write(arr);

delete []arr;
    return 0;
}
void sortf(int* arr){
    int reserve;
      for(int i=0;i<4;i++){
            for(int j=i+1;j<5;j++){
            if(*(arr+j)<*(arr+i)){
                 reserve=*(arr+i);
               *(arr+i) =*(arr+j);
               *(arr+j)=reserve;
               }
            }
        }
    }
void write(int* arr){
      for(int i=0;i<5;i++){
          cout<<*(arr+i)<<" ";
      }


}
