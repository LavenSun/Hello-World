#include<iostream>
using namespace std;
struct CandyBar
{
  char brand[20];
  float weight;
  int caruli;
};
int main() //糖块信息存储
{
  int answer;
  CandyBar snack //结构体初始化方法
  {
    "Mocha Munch",
    2.3,
    350
  };
  cout << "Do you need to update the info?\n";
  cout << "1 for yes and 0 for no.\n";
  cin >> answer;
  if(answer == 1)
  {
    cout << "Please input the new brand,weight and caruli:" << endl;
    cin >> snack.brand; //输入的新名称不可以有空格
    cin >> snack.weight;
    cin >> snack.caruli;
    cout << "The latest info of the candy are:\n";
    cout << "brand is " << snack.brand << "\n";
    cout << "weight = " << snack.weight << "\n";
    cout << "caruli = " << snack.caruli << "\n";
  }
  else
  {
    cout << "The latest info of the candy are:\n";
    cout << "brand is " << snack.brand << "\n";
    cout << "weight = " << snack.weight << "\n";
    cout << "caruli = " << snack.caruli << "\n";
  }
  return 0;
}
