class Solution {
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        for(int i=0 ; i<ransomNote.size() ; i++)
        {
            bool a= false;
            for(int j=0 ; j<magazine.size() ; j++)
            {
                if(ransomNote[i]==magazine[j])
                {
                    a=true;
                    magazine[j]='#';
                    break;
                }
            }
            if(a == false) 
            {
                return false;
            }
        }
        return true;
    }
};