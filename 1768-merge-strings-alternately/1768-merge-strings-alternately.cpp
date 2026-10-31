class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        int i=0;
        string merged="";
        int len1=word1.length();
        int len2=word2.length();
        while(i<len1 || i<len2)
        {
            if(i<len1)
            merged+=word1[i];
            if(i<len2)
            merged+=word2[i];
            i++;
        }
        return merged;
    }
};