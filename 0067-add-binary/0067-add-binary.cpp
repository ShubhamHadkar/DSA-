class Solution {
public:
    string addBinary(string a, string b) {
        int count = 0;
        string s;
        int j,i;
        int n = a.size();
        int m = b.size();
        if (n > m) {
            b.insert(b.begin(), n - m, '0');  
        } else if (m > n) {
            a.insert(a.begin(), m - n, '0');  
        }

        for(i = a.size()-1 ;  i>=0 ; i--){
            if(a[i]=='0' && b[i]=='0'){
                if(count == 1){
                    s.insert(s.begin(), '1'); 
                    count = 0;
                }else{
                    s.insert(s.begin(), '0');
                }
            }
            if(a[i]=='0' && b[i]=='1'){
                if(count == 1){
                    s.insert(s.begin(), '0'); 
                }else{
                    s.insert(s.begin(), '1');
                } 
            }
            if(a[i]=='1' && b[i]=='0'){
                if(count == 1){
                    s.insert(s.begin(), '0'); 
                }else{
                    s.insert(s.begin(), '1');
                }
            }
            if(a[i]=='1' && b[i]=='1'){
                if(count == 1){
                    s.insert(s.begin(), '1');
                    count = 1 ;
                }else{
                    s.insert(s.begin(), '0');
                    count = 1;
                }
            }
        }
        if (count == 1){
            s.insert(s.begin(), '1');
            return s;
        }else{
            return s;
        }
       
    }
};