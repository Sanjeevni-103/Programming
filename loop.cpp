#include<iostream>
using namespace std;
int main(){
    int num,range;
    cout<<"Enter the number :- ";
    cin>>num;
    cout<<"Enter the range :- ";
    cin>>range;
    for(int i=1;i<=range;i++){
        cout<<num <<"x"<< i<< "=" <<num*i<<endl;
    }
    return 0;
}