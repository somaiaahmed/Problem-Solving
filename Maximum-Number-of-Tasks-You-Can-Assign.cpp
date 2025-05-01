class Solution {
public:
    bool ok(vector<int>& tasks, vector<int>& workers, int pills, int strength, int count){

        deque<int> boost;
        int w = workers.size() - 1;
        int freePills = pills;

        for(int i = count - 1; i >= 0; i--){
            int task = tasks[i];

            if(!boost.empty() && boost.front() >= task) boost.pop_front();
            else if(w >= 0 && workers[w] >= task) w--;
            else{
                while(w >= 0 && workers[w] + strength >= task)
                    boost.push_back(workers[w--]);
                if(boost.empty() || freePills == 0)
                    return false;
                boost.pop_back();
                --freePills;
            }
        }
        return true;
    }
    int maxTaskAssign(vector<int>& tasks, vector<int>& workers, int pills, int strength) {
        sort(tasks.begin(), tasks.end());
        sort(workers.begin(), workers.end());

        int l = 0, h = min(tasks.size(), workers.size());

        while(l < h){
            int mid = (l + h + 1) / 2;
            if(ok(tasks, workers, pills, strength, mid)){
                l = mid;
            }
            else{
                h = mid - 1;
            }
        }
        return l;
    }    
};