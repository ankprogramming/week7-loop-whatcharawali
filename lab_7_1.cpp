#include <iostream>

using namespace std;

int main() {

  cout << "This is simple loop"<< endl << endl ;

  int i = 0;

  // ศึกษาตัวอย่างการใช้ for
  for(i = 0; i < 10 ; i++) {
    cout << "Round " << i << endl;
  }

  //cout << "Hello World 1" << endl;
  // TODO : แก้ไขส่วนนี้ด้วยการใช้ for
  for(int j = 1; j <= 8; j++) {
    cout << "Hello world " << j << endl;
  }


  return 0;
}
