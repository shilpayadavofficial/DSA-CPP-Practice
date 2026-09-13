class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) { 
         unordered_map<int,int>freq ; 
         // use to store data int key  
         for(int x : arr) {  // range based loop
            freq[x]++;
         } 
         unordered_set<int>seen ; 
         // A set  sotre val without  duplicate  
         for(auto it : freq)  {

            int frequency = it.second ;  
            if(seen.count(frequency)) {
                return false ; //Duplicate frequency → return false.
            } 
             seen.insert(frequency ); //seen = already checked frequencies ki list

                 // insert() = frequency ko us list mein add karna.
             return true ; //  unique frequencie→ return true.
         }
     
    }
};