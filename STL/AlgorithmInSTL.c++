#include<bits/stdc++.h>
using namespace std;

 bool comp(pair<int,int>p1,pair<int,int>p2){
             if(p1.second < p2.second) return true; //sorts in ascending order of the second element
             if(p1.second > p2.second) return false; //sorts in ascending order of the second element
              //if the both the second elements are same,the sorts acc to the first value
             if(p1.first < p2.first) return true; //if it is > then it sorts acc to the descending order of first element
             return false;
    }
void extra(){
    int a[] = {1,9,6,5,3};
    // sort(a,a+5);  //this sorts the whole array
    // sort(a+2,a+5);  //this sorts only te specific elements
    sort(a,a+5, greater<int>()); //this will sort the array in descending order

    pair<int,int> b[]={{4,2},{3,2},{1,5}};
    sort(b,b+3,comp); //here the comp fn compares the two elements which is written fn
   
    //similarly it'll be in vectors
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto j:b){
        cout<<"{"<<j.first<<","<<j.second<<"}"<<endl;
    }

    int num=7;
    int cnt = __builtin_popcount(num); //gives the number of one in the bits time complexity-O(b),b-number of bits
    cout<<cnt<<endl;
    
    cout<<"--Permutation of string--"<<endl;
    string s="Abc"; //it can also be numbers
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));

    int max = *max_element(a,a+5);
    int min = *min_element(a,a+5);
    cout<<max<<" "<<min;
}
int main(){
    extra();
    return 0;
}