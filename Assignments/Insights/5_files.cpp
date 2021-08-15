#include <iostream>
#include <fstream>

using namespace std;

class file
{
  string id;
  string name;
  string  num;
  string number;

  public:
  void read(){

  ifstream ip("data.csv");

  if(!ip.is_open()) std::cout << "ERROR: File Open" << '\n';

  while(ip.good()){

    //getline(ip,id,',');
    getline(ip,name,',');
    getline(ip,num,',');
    getline(ip,number,'\n');

    std::cout << id << " "<< name << " " << num  << " " << number << '\n';
    //std::cout << num << '\n';
    //td::cout << number << '\n';
    //std::cout << << '\n';
  }

  ip.close();
}
};
int main()
{
	file f1;
	f1.read();
}