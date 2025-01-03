<<<<<<< HEAD
/*
akashmaji946(@gmail.com)
*/
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int end = (int)s.size() - 1;
        while(s[end] == ' ') end--;
        while(end >= 0){
            if(s[end] == ' '){
                return len;
            }else{
                end--;
                len++;
            }
        }
        return len;
    }
=======
/*
akashmaji946(@gmail.com)
*/
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int end = (int)s.size() - 1;
        while(s[end] == ' ') end--;
        while(end >= 0){
            if(s[end] == ' '){
                return len;
            }else{
                end--;
                len++;
            }
        }
        return len;
    }
>>>>>>> a8fce8258a90bb443e3248e010728f6fe3388442
};