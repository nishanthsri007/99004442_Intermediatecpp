#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
 
int main() {

   // create a vector to store int
   vector<int> vec{1,2,3,4,5,6,7,8,9}; 
   int i,sum=0,count=0,mean;

   int size = vec.size();
   //cout << "vector size = " << vec.size() << endl;
   for(i = 0; i < size; i++) {
       sum = sum + vec[i];
       //cout << sum << endl;
}
    mean = (sum/9);
    for(i = 0; i < size; i++) {
        if(vec[i]<mean)
        {
            count++;
        }
    }
    cout << "Total count :" << count << endl;
}