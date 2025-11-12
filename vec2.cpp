#include<iostream>
#include <vector>
#include "vec2.h"
using namespace std;

int main(){
// vector <vector <int> > arr(4,vector<int>(5,0));
// int totalRows=arr.size();
// cout<<"Total Rows :"<<totalRows<<endl; // 4
// int totalColumn=arr[0].size(); 
// cout<<"Total Rows :"<<totalColumn; // 5


// 1 D Vector Creation
vector <int> first;
first.push_back(10);
first.push_back(20);
first.push_back(30);
first.push_back(40);

vector <int> Second;
Second.push_back(100);
Second.push_back(200);
Second.push_back(300);
Second.push_back(400);

// first.swap(Second);

// for(int i : first){
    
//     cout << i <<" ";
// }
// cout<<endl;

// for(int i : Second){
   
//     cout << i <<" ";
// }

cout<<Second.at(0);


    return 0;
}
void NewFunction()
{
    cout << "------------------" << endl;
}