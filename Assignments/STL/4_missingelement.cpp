#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {

   vector<string> v{"one","two","four","five"};
   vector<string> v1{"one","two","three","four","five"};
   int count=0;
   for (int i=0; i<v1.size() ;++i)
   {
      for(int j=0; j<v.size() ;++j)
      {
      if(v1[i]==v[j]){
         count=count+1;
      }
      }
      if(count==0){
         cout<<v1[i]<<'\n';
      }else{
         count=0;
      }
   }
}