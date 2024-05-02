class Solution {
public:
    bool isPalindrome(int x) {
       int result=0;
      int  original=x;
       while(x!=0){
        int a=x%10;
        if(result>INT_MAX/10 || result<INT_MIN/10){
            return 0;
        }
        result=result*10+a;
        x=x/10;
       } 
    //    return result==original;
    if(result<0){
        cout<<false;
    }
    else if(original==result){
        return true;}

    return false;
    
    }  
    };