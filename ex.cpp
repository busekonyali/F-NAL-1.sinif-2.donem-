#include <iostream>

using namespace std;

void write(int *arr,int sizee);

int main()
{
    int* arr=new int[7];
    for(int i=0;i<7;i++){
            cout<<"enter "<<i+1<<". eleman: "<<endl;
            cin>>arr[i];
            }
  cout<<"original: "<<endl;
  write(arr,7);
  cout<<endl;
  int* arr2=new int[7];
  int* arr3=new int[7];

    int oddcounter=0;
    int evencounter=0;

  for(int i=0;i<7;i++){
        if(arr[i]%2==0){
            arr2[evencounter++]=arr[i];
  }else{
      arr3[oddcounter++]=arr[i];
      }

      }

 cout<<"cift: "<<endl;
 write(arr2,evencounter);
 cout<<endl;
 cout<<"tek: "<<endl;
 write(arr3,oddcounter);

delete[]arr;
delete[]arr2;
delete[]arr3;
    return 0;
}

void write(int *arr,int sizee){
  for(int i=0;i<sizee;i++){

    cout<<arr[i]<<" ";
  }

}
