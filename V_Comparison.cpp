#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  char comparision;

  cin >> a >> comparision >> b;
  if (comparision == '<')
  {
    if (a < b)
      cout << "Right" << endl;
    else
      cout << "Wrong" << endl;
  }
  else if (comparision == '>')
  {
    if (a > b)
    {
      cout << "Right" << endl;
    }
    else
    {
      cout << "Wrong" << endl;
    }
  }
  else if (comparision == '=')
  {
    if (a == b)
    {
      cout << "Right" << endl;
    }
    else
    {
      cout << "Wrong" << endl;
    }
  }
  return 0;
}