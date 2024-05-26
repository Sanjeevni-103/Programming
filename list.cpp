#include<iostream>
#include<list> //header file to declare list.
#include<algorithm> //header file for using sorting.
using namespace std;
int main(){
    list<int>l1; //syntax for declaration of a list.
    l1.push_back(30); //way of pushing elements in a list. 
    l1.push_back(40);
    l1.push_back(4);
    l1.push_back(16);
    l1.push_back(24);
    l1.push_back(78);
    cout<<endl<<"The initial list is as follows :- "<<endl;
    for(int x:l1){  //way of printing all the elements of the list.
        cout<<x<<"  ";
    }
    l1.push_front(1); //way of adding elements in the front of the list. 
    l1.push_front(3);
    cout<<endl<<"The updated list is :- "<<endl;
    for(int x:l1){
        cout<<x<<"  ";
    }
    l1.sort(); //way of sorting a list.
    cout<<endl<<"The list after sorting is :- "<<endl;
    for(int y:l1){
        cout<<y<<"  ";
    }
    l1.pop_back(); //way of deleting elements from the back of the list.
    l1.pop_back();
    cout<<endl<<"The list after sorting and poping the back elements :- "<<endl;
    for(int y:l1){
        cout<<y<<"  ";
    }
    l1.pop_front(); //way of deleting elements from the front of the list.
    cout<<endl<<"The list after poping elements from front :- "<<endl;
    for(int y:l1){
        cout<<y<<"  ";
    }
    l1.reverse(); //way of reversing a list.
    cout<<endl<<"The reversal list is :- "<<endl;
    for(int y:l1){
        cout<<y<<"  ";
    }
    return 0;
}
//THANKYOU FOR YOUR KIND ATTENTION AND PRECIOUS TIME. STAY HAPPY AND ENJOY CODING.