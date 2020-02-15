#include<iostream>
using namespace std;
void order(int a[], int n) //排序
{
  int i, j, k;
  for(i = 0; i < n; i++)
  {
  for(j = 0; j < i; j++)
  {
     if(a[j] > a[i] )
    {
      k = a[j];
      a[j] = a[i];
      a[i] = k;
    }
  }
  }
}
int match1(int a[], int n, int x) //奇数查找
{
  int low, middle, high;
  low = 0;
  high = n-1;
  middle = (low + high) / 2;
  while(low <= high)
  {
    if(x == a[middle])
    return middle + 1;
    else if (x < a[middle])
    {
      high = middle - 1;
      middle =  (low + high) / 2;
    }
    else
    {
      low = middle + 1;
      middle =  (low + high) / 2;
    }
  }
  return -1;
}
int match2(int a[], int n, int x) //偶数查找
{
  int low, middle, high;
  low = 0;
  high = n-1;
  middle = (low + high + 1) / 2;
  while(low <= high)
  {
    if(x == a[middle])
    return middle + 1;
    else if (x < a[middle])
    {
      high = middle - 1;
      middle =  (low + high + 1) / 2;
    }
    else
    {
      low = middle + 1;
      middle =  (low + high + 1) / 2;
    }
  }
  return -1;
}
int main() //二分查找
{
  int n, x, y = -1;
  cout << "Input the total number of the array: " << endl;
  cin >> n;
  int a[n];
  cout << "Input the numbers:\n";
  for(int i = 0; i < n; i++)
  cin >> a[i];
  order(a, n);
  for(int j = 0; j < n; j++)
  {
    cout << a[j] << " ";
    cout << endl;
  }
  cout << "Input the number you are looking for:\n";
  cin >> x;
  if(n % 2 == 0)
  y = match2(a, n, x);
  else
  y = match1(a, n, x);
  if(y != -1)
  cout << "The location of the target number is " << y << endl;
  else
  cout << "No match." << endl;
  return 0;
}
