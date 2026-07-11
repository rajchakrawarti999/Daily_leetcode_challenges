class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        
        int n = events.size();
        int counter = 0;
        int sum = 0;

        int i = 0;

        while(i<n){

            if(counter==10) break;

            if(events[i]=="W"){
                counter++;
                i++;
            }
            else if(events[i]=="NB" || events[i]=="WD"){
                sum += 1;
                i++;
            }
            else{
                int sum1 = stoi(events[i]);
                sum += sum1;
                i++;
            }
        }

        vector<int>ans;
        ans.push_back(sum);
        ans.push_back(counter);

        return ans;
    }
};