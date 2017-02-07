#include <iostream>
#include <fstream>
using namespace std;
int main(){
    for (;;){
  int a,b;
  
    ifstream f;
    f.open ("/sys/class/thermal/thermal_zone0/temp");
  
    while (f>>a){}
    
    b=a/1000;
      cout <<b<<" C'"<<endl;
    }
cin.get ();
return 0
}
