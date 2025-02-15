class Solution {
public:
string stringToBinaryString(string num) {
        int n = stoi(num);  
        string binary = "";

        if (n == 0) return "0";  

        while (n > 0) {
            binary = char((n % 2) + '0') + binary;
            n /= 2;
        }
        return binary;
    }
    string convertDateToBinary(string date) {
        string ans ; 
        for(int i = 0 ; i < date.length() ; i++){
            string st1 = "" ; 
            while(date[i]!='-'&&i<date.length()){
                st1 +=date[i] ;
                i++ ;  

            }
            string st2 =  stringToBinaryString(st1) ; 
           
            ans+=st2 ; 
            if(i!=date.length()){
                ans+='-' ; 
            }
        }
        return ans ; 
    }
};