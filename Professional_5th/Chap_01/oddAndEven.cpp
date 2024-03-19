#include <iostream>
#include <vector>

using namespace std;

struct OddsAndEvens
{
  vector<int> odds,evens;
};

void sperator(const vector<int> &arr,vector<int> &odds,vector<int> &evens);


OddsAndEvens separeteOddAndEvens(const std::vector<int> &arr)
{
  std::vector<int> odds,evens;
  for(int i: arr)
  {
    if(i % 2 == 0)
    {
      odds.push_back(i);
    }
    else
    {
      evens.push_back(i);
    }
    
  }

  return OddsAndEvens{.odds = odds,.evens = evens};
}

int main(int argc, char const *argv[])
{
  
  vector<int> arr{1,2,3,4};
  vector<int> odds,evens;

  sperator(arr,odds,evens);
  for(int i: odds)
  {
    cout << i << endl;
  }

  for(int i : evens)
  {
    cout << i << endl;
  }
  cout << "------------------" << endl;
  auto odd = separeteOddAndEvens(arr);
  for(int i: odd.odds)
  {
    cout << i << endl;
  }
  for(int i: odd.evens)
  {
    cout << i << endl;
  }

  return 0;
}

void sperator(const vector<int> &arr,vector<int> &odds,vector<int> &evens)
{
  for(int i: arr)
  {
    if (i % 2 == 1)
    {
      odds.push_back(i);
    }
    else
    {
      evens.push_back(i);
    }
    
  }
}


/* void seperateOddsAndEvens(const int arr[],size_t size,int** odds,size_t* numsOdds,int** evens,size_t* numsEvens)
{
  *numsOdds = *numsEvens = 0;

  for (size_t i = 0; i < size; i++)
  {
    if (arr[i] % 2 == 1)
    {
      ++(*numsOdds);
    }
    else
    {
      ++(*numsEvens);
    }
    
    
  }

  *odds = new int[*numsOdds];
  *evens = new int[*numsEvens];

  size_t oddsPos = 0,evenPos = 0;
  for (size_t i = 0; i < size; i++)
  {
    (*odds)[oddsPos++] = arr[i];

  }
  else
  {
    (*evens)[evenPos++] = arr[i];
  }

}

void separateOddsAndEvens(const int arr[],size_t size,int *&odds,
size_t& numOdds,int *&evens,size_t& numEvens)
{
  numOdds = numEvens = 0;
  
  for (size_t i = 0; i < size; i++)
  {
    if(arr[i] % 2 == 1)
    {
      ++numOdds;
    }
    else
    {
      ++numEvens;
    }
    
  }
  
  odds = new int[numOdds];
  evens = new int[numEvens];

  size_t oddsPos{0}, evenPos{0};

  for (size_t i = 0; i < size; i++)
  {
    if (arr[i] % 2 == 1)
    {
      odds[oddsPos++] = arr[i];
    }
    else
    {
      evens[evenPos++] = arr[i];
    }
  
  }
  
} */

