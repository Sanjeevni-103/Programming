//vectors notes of 13/09/23(wednesday) i.e. "Day-2".
#include<iostream>
#include<vector>//header file to be used to declare vectors.
using namespace std;
int main(){
    vector<int>myvector;//vector declaration.
    cout<<"The vector elements are :-  "<<endl;
    int b=myvector.size();
    for(int i=1;i<21;i++){
        myvector.push_back(i);//way of adding elemnts to vector.
    }
    for(int i=0;i<myvector.size();i++){//way of traversal in vector and hence printing it.
        cout<<myvector[i]<<" ";
    }
    b=myvector.size();
    cout<<endl<<"The size of the vector is :- "<<b<<endl;
    cout<<"\t"<<"**************************************"<<endl;
    myvector.insert(myvector.begin(),100);//way of adding elements at the beginning of the vector.
    myvector.insert(myvector.cend(),50);//way of adding elemnts at the end of the vector.
    myvector.insert(myvector.begin(),2,103);//adding 103, 2 times at the beginning of the vector.
    myvector.insert(myvector.cend(),3,102);//adding 102, 3 times at the end of the vector.
    cout<<endl<<"The vector after adding the new elements :- "<<endl;
    for(int i=0;i<myvector.size();i++){
        cout<<myvector[i]<<" ";
    }
    b=myvector.size();
    cout<<endl<<"The size of the vector is :- "<<b<<endl;
    cout<<"\t"<<"**************************************"<<endl;
    myvector.pop_back();//way of deleting elements from the end of the vector.
    cout<<endl<<"The final vector after all operations :- "<<endl;
    for(int i=0;i<myvector.size();i++){
        cout<<myvector[i]<<" ";
    }
    b=myvector.size();
    cout<<endl<<"The size of the vector is :- "<<b;
    return 0;
}