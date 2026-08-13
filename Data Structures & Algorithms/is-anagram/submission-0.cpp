/*
    Anagram: Contain same exact characters as another string, but order is different

    Cases:
        - Different lengths = false
        - Same length:
            -Check if letters are the same
            -Check if num of each letter is the same
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> countS;
        unordered_map<char, int> countT;

        for (int i = 0; i < s.length(); i++) {
            countS[s[i]]++;  // Increase the frequency of that letter
            countT[t[i]]++;  // And then check to compare if frequencies of letters are same
        }
        
        //if (countS != countT) {return false;} -> doesnt work, 
        return countS == countT;
    }
};
