#include<iostream>
using namespace std;
int main() //按序查找
{
  int n, x, location = -1;
  cout << "Input the total number of the array: " << endl;
  cin >> n;
  int a[n];
  cout << "Input the numbers:\n";
  for(int i = 0; i < n; i++)
  cin >> a[i];
  cout << "Input the number you are looking for:\n";
  cin >> x;
  for(int j = 0; j < n; j++)
  {
    if(x == a[j])
    location = j + 1;
  }
  if(location != -1)
  cout << "The location of the target number is " << location << endl;
  else
  cout << "No match." << endl;
  return 0;
}
