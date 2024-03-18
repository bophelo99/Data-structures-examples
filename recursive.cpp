#include <bits/stdc++.h>

int fibonacci(int n)
{
    if(n<=1){
            return n;
    }
      else{
            return fibonacci(n-1) + fibonacci(n-2);
      } 
}

int Sum(int n)
{
    if(n<=1)
        {return n;}
    else{
        return n + Sum(n-1);
    }
}

int evenSquare(int n)
{
    if(n==0)
        {return n;}
    else if(n%2==0)
        {return n*n + evenSquare(n-1);}
    else
        {return evenSquare(n-1);}

}

bool search(std::string s, char c, int l)
{
    if(l==0)
        {return false;}
    else if(s[l]==c)
        {return true;}
    else 
        {return search(s,c,l-1);}
}

int sumArray(std::vector<int> list, int top)
{
    if(top<=0)
        {return list[top];}
    else
        {return list[top] + sumArray(list, top-1);}
}

int main()
{
   std::cout << Sum(5) << " \n";
   std::cout << evenSquare(6) << " \n";
   std::cout << fibonacci(2) << " \n";
   std::string s="bophilo"; char c='o';
   std::cout<< search(s,c, s.length()-1) << " \n";
   std::vector<int> num{8,3,2,9,5};
   std::sort(num.begin(), num.end(), std::greater<int>());
   auto Top=2;
   std::cout << sumArray(num, Top-1) <<" \n" ;

    return 0;
}