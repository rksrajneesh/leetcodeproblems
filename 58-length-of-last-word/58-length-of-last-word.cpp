class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        for(std::string::reverse_iterator rit=s.rbegin(); rit!=s.rend(); ++rit){
            if((*rit)!='\x20'){
                    if((*rit)!='\x20'){
                    ans+=1;
                    ++rit;
                    if((*rit)=='\x20'){
                        return ans;
                    }
                    else{
                        --rit;
                    }
                }
                else{
                    return ans;
                }
            }
        }
        return ans;
    }
};