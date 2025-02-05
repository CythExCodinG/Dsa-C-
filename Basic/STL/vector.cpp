#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);

  vector<int>::iterator it = v.begin();
  for (int i = 0; i < 4; i++)
  {
    cout << endl
         << *(it);
    it++;
  }
  cout << endl
       << "Vector print using auto" << endl;
  for (auto it = v.begin(); it != v.end(); it++)
  {
    cout << *(it) << endl;
  }
  cout << "Using for each" << endl;
  for (auto it : v)
  {
    cout << it << " ";
  }
  cout << "After insert funtion" << endl;
  v.insert(v.begin() + 1, 30);
  for (auto it : v)
  {
    cout << it << " ";
  }
}