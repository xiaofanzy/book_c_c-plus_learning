#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Review
{
  string bookname;
  int sales;
};

bool get(Review &r);
void ShowReview(const Review &r);
bool shot(const Review &r,const Review &t);

int main(void)
{
  vector<Review> books;
  Review temp;

  while (get(temp))
  {
    books.push_back(temp);
  }
  
  int num = books.size();

  if (num > 0)
  {
    cout << "Your entered the following " << endl;
    for (int i = 0; i < num; i++)
    {
      ShowReview(books[i]);
    }

    vector<Review>::iterator pr;

    for(pr = books.begin();pr != books.end();pr++)
    {
      ShowReview(*pr);
    }

    vector<Review> oldbook(books);
    cout <<  "---------------" << endl;
    if (num > 3)
    {
      books.erase(books.begin() + 1,books.begin() + 3);
      for(pr = books.begin();pr != books.end();pr++)
        ShowReview(*pr);
    }
    
    books.swap(oldbook);
    for(pr= books.begin();pr != books.end();pr++)
      ShowReview(*pr);
    cout << "--------------" << endl;
    for_each(books.begin(),books.end(),ShowReview);

    // 排序
    random_shuffle(books.begin(),books.end());
    for_each(books.begin(),books.end(),ShowReview);
    sort(books.begin(),books.end());
    for_each(books.begin(),books.end(),ShowReview);
    sort(books.begin(),books.end(),shot);
    
  }
  
  return 0;
}



bool operator<(const Review &r,const Review &t)
{
  if (r.bookname < t.bookname)
  {
    return true;
  }
  else if (r.bookname == t.bookname && r.sales < t.sales)
  {
    return true;
  }
  else
  {
    return false;
  }
  
  
  
}


bool shot(const Review &r,const Review &t)
{
  return r < t;
}


bool get(Review &r)
{
  cout << "Enter the bookname:";
  getline(cin,r.bookname);
  if (r.bookname == "quit")
  {
    return false;
  }
  
  cout << "Enter the sales";
  cin >> r.sales;

  if (!cin)
  {
    return false;
  }
  
  while (cin.get() != '\n')
  {
    continue;
  }
  return true;
}

void ShowReview(const Review &r)
{
  cout << r.sales << "\t" << r.bookname << endl;
}

