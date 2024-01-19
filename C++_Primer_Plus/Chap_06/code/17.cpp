#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
const int SIZE = 80;

int main(void)
{
  char text_name[SIZE];
  cout << "Enter the name of file:";
  cin.getline(text_name,SIZE);

  ifstream inFile;
  inFile.open(text_name);

  if (!inFile.is_open())
  {
    cout << "Could not open the file" << text_name << endl;
    exit(EXIT_FAILURE);
  }

  cout << "Conclucation, you open the file." << endl;

  double value;
  double sum;
  int count = 0;

  inFile >> value;

  while (inFile.good())
  {
    sum += value;
    count++;
    inFile >> value;
  }

  if (inFile.eof())
  {
    cout << "End of File Reached" << endl;
  }
  else if (inFile.fail())
  {
    cout << "Input terminated by data mismatch." << endl;
  }
  else
  {
    cout << "Other mismatch.\n";
  }

  if (count == 0)
  {
    cout << "NO date processed" << endl;
  }
  else
  {
    cout << "Items read:" << count << endl;
    cout << "Sum:" << sum << endl;
    cout << "Average :" << sum /count << endl;
  }

  inFile.close();
  
  
  
  

  
  



  return 0;
}