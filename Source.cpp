#include <iostream>
 
using namespace std;
 
class Mathematics {
  int x, y;
 
public:
  void input() {
    cout << "Input two inetegers\n";
    cin >> x >> y;
  }
 
  void add() {
    cout << "Result = " << x + y;
  }
 
};
 
int main()
{
   Mathematics m; // Creating object of class
 
   m.input();
   m.add();

 cout<<"hello"; 

   return 0;
   
}