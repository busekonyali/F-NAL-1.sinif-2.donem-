#include <iostream>

using namespace std;
struct node{
string name;
int id;
int clas;
float gpa;
node* next;
};
node *s1=NULL,*s2=NULL,*s3=NULL,*s4=NULL;
float gpa1=0.0,gpa2=0.0,gpa3=0.0,gpa4=0.0;
void addstudent(node*& head);

int main()
{
    node* head=NULL;
for(int i=0;i<5;i++){
    addstudent(head);
}
    cout << "1. sınıf: " << s1->name << " GPA: " << s1->gpa << endl;
    cout << "2. sinif: " << s2->name << " GPA: " << s2->gpa << endl;
    cout << "3. sınıf: " << s3->name << " GPA: " << s3->gpa << endl;
    cout << "4. sınıf: " << s4->name << " GPA: " << s4->gpa << endl;




    return 0;
}
void addstudent(node*& head){
    node* p=new node;
 cout << "Ad: ";
    cin >> p->name;
    cout << "ID: ";
    cin >> p->id;
    cout << "Sınıf (1-4): ";
    cin >> p->clas;
    cout << "GPA: ";
    cin >> p->gpa;

p->next=head;
head=p;
    if(p->clas==1 && gpa1<p->gpa){
        gpa1=p->gpa;
        s1=p;
    }

    else if(p->clas==2 && gpa2<p->gpa){
        gpa2=p->gpa;
        s2=p;
    }
    else if(p->clas==3 && gpa3<p->gpa){
        gpa3=p->gpa;
        s3=p;
    }
    else if(p->clas==4 && gpa4<p->gpa){
        gpa4=p->gpa;
        s4=p;
    }
    p->next=head;
    head=p;
}
