#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> marks;
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);
    // for(int i:marks){
    //     cout<<i<<" ";
    // }

    // Create an iterator
    vector <int> :: iterator it = marks.begin();
    while (it !=marks.end()){
        cout<<*it<<",";
        it++;
    }
    
    return 0;
}