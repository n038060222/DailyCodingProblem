#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int longestSubstringWithKDistinct(string str,int k){
    if (k == 0 || str.empty()) return 0;
    int start=0,len=0;
    unordered_map<char, int> charCount;
    for (int end=0;end<str.size();end++){
        len=end-start;
       
        charCount[str[end]]++;
        
       
        while(charCount.size()>k){
            charCount[str[start]]--;
            if(charCount[str[start]]==0)
                charCount.erase(str[start]);
            start++;
        }
        len=max(len,end-start+1);
        
    }
    return len;
}
int main()
{
    string str = "abcba";
    int k = 2;
    int res=longestSubstringWithKDistinct(str,k);
    std::cout << res << std::endl;
    std::cout<<"Hello World";

    return 0;
}
