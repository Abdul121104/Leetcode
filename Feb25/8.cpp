class NumberContainers {
public:

            unordered_map<int,priority_queue<int,vector<int>,greater<int>>>mp;
    unordered_map<int,int>up;
    NumberContainers() {
    }
    
    void change(int index, int number) {
        up[index]=number;
        mp[number].push(index);
    }
    
    int find(int number) {
        if(mp.find(number)!=mp.end()){
            while(mp[number].size() and up[mp[number].top()]!=number){
                mp[number].pop();
            }
            if(mp[number].size())
                return mp[number].top();
            else return -1;
        }else return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */
