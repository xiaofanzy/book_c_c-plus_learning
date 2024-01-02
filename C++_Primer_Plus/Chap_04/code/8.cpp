#include <iostream>
#include <string>

int main(void)
{
  using namespace std;

 string s1, s2;
 s2 = "penguin";
 s1 = s2;
 cout << "s2 :" << s2 << endl;
 s2 = "buzzard";
 cout << "s2 :" << s2 << endl;
 cout << "you can concatenate strings: s3 = s1 + s2" << endl;
 string s3 = s1 + s2;
 cout <<" s3 : " << s3 << endl;
 s1 += s2;
 cout << "s1 += s2 yield s1 = " << s1 << endl;
 s2 += " for a day";
 cout << "s2 =" << s2 << endl;


  return 0;
}