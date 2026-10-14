

//#include <iostream>
//using namespace std;
//int main(){
  //  int count = 0;
    //int a;
    //cin >> a;
    //while (a!= 0){
       // count = count + a;
      //  cin >> a;
   // }
    //cout << count << endl;
  //  return 0;
//}

#include <iostream>
using namespace std;
int main(){
    int s;
    int p;
    int t;
    int years;
    int total;
    years = 1;
    cin >> s >> p >> t;
    total = s*p/100;
    while (total < t){
        years = years +1;
        total = total * p / 100;
    }
    cout << years << "\n"  << total << endl;
    return 0;
}