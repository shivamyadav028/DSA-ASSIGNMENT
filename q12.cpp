#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(char str[], int n) {
  int start = 0;
  int end = n-1;
  while (start < end) {
    if (str[start] != str[end]) {
      if (str[start] != 'X' || str[end] != 'X')
        return false;
    }
    start++;
    end--;
  }
  return true;
}

int main() {
    char ch[] = "abaXaba";
    bool ans = isPalindrome(ch, sizeof(ch)-1);
    if(ans)
        cout << "Palindrome"<<endl;
    else
        cout << "Not Palindrome"<<endl;
    return 0;
}

