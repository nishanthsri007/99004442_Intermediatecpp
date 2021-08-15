#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {

   std::vector<string> v{"c++","c++","c++","c++","cpp","c++","c++","c++","c++","c++","c++","c++","c++"};

   int count=0;
   for(int i=0;i<v.size();i++){
       for(int j=0;j<v.size();j++){
           if(v[i]==v[j]){
               count++;
           }
       }
       if(count!=(v.size()-1)){
           cout<<v[i]<<'\n';
           count=0;
       }else{
           count=0;
       }
       

   }
}