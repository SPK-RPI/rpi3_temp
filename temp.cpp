
// by SPK
#include <iostream>
#include <fstream>
using namespace std;
int main(){
     int a,b;
  ifstream f;
   f.open ("/sys/class/thermal/thermal_zone0/temp");
   while (f>>a){}
   b=a/1000;
      cout <<"CPU===>> "<<b<<" C'"<<endl;
cin.get ();
return 0 ;
}
