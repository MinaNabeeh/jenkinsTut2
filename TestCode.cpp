#include <iostream>
#include <fstream>
using namespace std;
int main(){
cout<<"start OF Project"<<endl;

ofstream myFile;
myFile.open("TestResult.txt");
int x=5+0+10+1+11;
myFile<<"result is "<<x<<endl;
cout<<"x is "<<x<<endl;
cout<<"end Of Project"<<endl;
return 0;
}
