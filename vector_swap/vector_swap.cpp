#include <iostream>
#include <vector>
using namespace std;
void vector_swap(vector<int> &v1, vector<int> &v2,
                 int start1, int end1,
                 int start2, int end2)
{
  vector<int> sw1, sw2;

  auto it1 = v1.begin();
  auto it2 = v2.begin();

  int i = 0;

  while (it1 != v1.end() || it2 != v2.end())
  {
    if (it1 == v1.begin() + start1)
    {
      // cout << "YES " << start2 << " " << end2;
      for (auto it = v2.begin() + start2; it != v2.begin() + end2; it++)
      {
        // cout << "pb " << *it << endl;
        sw1.push_back(*it);
      }
      it1 = v1.begin() + end1;
      // cout << "it1 " << *it1;
    }
    else if (it1 != v1.end())
    {
      sw1.push_back(*it1);
      it1++;
    }
    if (it2 == v2.begin() + start2)
    {
      for (auto it = v1.begin() + start1; it != v1.begin() + end1; it++)
        sw2.push_back(*it);
      it2 = v2.begin() + end2;
    }
    else if (it1 != v2.end())
    {
      sw2.push_back(*it2);
      it2++;
    }
    cout << "sw1 ";
    for (auto x : sw1)
      cout << x << " ";
    cout << endl;
    cout << "sw2 ";
    for (auto x : sw2)
      cout << x << " ";
    cout << endl;

    i++;
    if (i == 5)
      break;
  }
  v1 = sw1;
  v2 = sw2;
}

int main()
{
  // read input
  int n, c;
  vector<int> v1, v2;
  cin >> n; // number of v1
  for (int i = 0; i < n; i++)
  {
    cin >> c;
    v1.push_back(c);
  }
  cin >> n; // number of v2
  for (int i = 0; i < n; i++)
  {
    cin >> c;
    v2.push_back(c);
  }
  int s1, e1, s2, e2; // position
  cin >> s1 >> e1 >> s2 >> e2;
  // call the function
  vector_swap(v1, v2, s1, e1, s2, e2);
  // display content of the stack
  cout << "v1 has " << v1.size() << endl;
  for (auto &x : v1)
  {
    cout << x << " ";
  }
  cout << endl;
  // display content of the stack
  cout << "v2 has " << v2.size() << endl;
  for (auto &x : v2)
  {
    cout << x << " ";
  }
  cout << endl;
}