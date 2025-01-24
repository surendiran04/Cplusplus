#include<bits/stdc++.h>
using namespace std;

 bool comp(pair<int,int>p1,pair<int,int>p2){
             if(p1.second < p2.second) return true; //sorts in ascending order of the second element
             if(p1.second > p2.second) return false; //sorts in ascending order of the second element
              //if the both the second elements are same,the sorts acc to the first value
             if(p1.first < p2.first) return true; //if it is > then it sorts acc to the ascending order of first element
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
    cout<<log10(num)+1<<endl;//gives no of digits in the number

    string name="Helloworld";
    for(int i=0;i<name.size();i++){
     cout<<name.substr(i,3); //here 3 is the length of the substring that needs to created for pasess,i- starting index of the substring
    }
    
    cout<<"--Permutation of string--"<<endl;
    string s="Abc"; //it can also be numbers
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));

    int max = *max_element(a,a+5);
    int min = *min_element(a,a+5);
    cout<<max<<" "<<min;

 accumulate(nums.begin(),nums.end(),0); //gives the sum of the all the elements in the array

 string stg='1011';
 int carry=stg[0]-'0'; //it coverts the string to a number;
 string ans=carry+'0'; //it converts the number into a string

 string st="101";
 int number=stoi(st); // stoi coverts string to an integer

// std::istringstream class is part of the <sstream> header and provides a way to stream input from a string.
 std::string input = "1 2 3";
    std::istringstream my_stream(input);
    int n;
    my_stream >> n;  //use in a while loop to get the whole words in the string while(my_stream >> n ){ }
    std::cout << n << "\n"; // Output: 1

    string str1 = "hello";
    string str2 = "hello world";

    cout << str1.compare(str2) << endl;           // Result is negative, as "hello" < "hello world"

    cout << str2.compare(0, 5, str1) << endl;     // Result is 0, as "hello" == "hello"

    cout << str2.compare(6, 5, str1, 0, 5) << endl; // Result is positive, as "world" > "hello" 

    cout << str2.compare(6, 5, str2, 6, 5) << endl; // Result is 0, as "word" == "world"

    cout << str1.compare("hello") << endl;        // Result is 0, as both strings are equal

    string path = "/home/user/documents/file.txt";
    
    // Find the last occurrence of '/'
    size_t pos = path.find_last_of('/');
    cout<<path.substr(0,pos); ///home/user/documents

    cout<<string(3,'a') //aaa string(count,char)  - make the char count times

}
int main(){
    extra();
    return 0;
}
