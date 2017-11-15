
// by SPK
#include <iostream>
#include <fstream>
#include "color.h"
using namespace std;

int main(){
     int a,b;
  ifstream f;
   f.open ("/sys/class/thermal/thermal_zone0/temp");
   while (f>>a){}
   b=a/1000;
      if(b>=0&&b<=30){
            cout <<FGRN("CPU===>> ")<<b<<" C'"<<endl;
      }
      else if (b>=31&&b<=49){
            cout <<FYEL("CPU===>> ")<<b<<" C'"<<endl;
                        
      }
      else{
            cout <<FRED("CPU===>> ")<<b<<" C'"<<endl;
      }

cin.get ();
return 0 ;
}
