class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string> latter;
        vector<string> digits;

        for(auto log : logs){

            int i = 0;

            while(log[i] != ' '){
                i++;
            }

            if(isdigit(log[i+1])){
                digits.push_back(log);
            }
            else{
                latter.push_back(log);
            }
        }

        sort(latter.begin(), latter.end(), [](string a, string b){

            string x = a.substr(a.find(' ')+1);
            string y = b.substr(b.find(' ')+1);

            if(x==y){
                return a < b;
            }
            return x < y;
        });

        for(auto log : digits){
            latter.push_back(log);
        }

        return latter;
    }
};