#include <iostream>
#include <vector>
using namespace std;
 
int main() {

   // create a vector to store int
   vector<int> vec{10,20,30,40,50,60,70,80,90}; 
   int i,sum=0;

   
   int size = vec.size();

   
   for(i = 0; i < size; i++) {
      sum = sum + vec[i];
   }
   //cout << sum;
   float average = sum/1.5;
   cout << "The Average speed is : " << average << "km/hr" << endl;
}