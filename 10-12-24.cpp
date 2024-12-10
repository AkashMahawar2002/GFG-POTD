int minRemoval(vector<vector<int>> &intervals) {
        // code here
        //sort 
        sort(intervals.begin() , intervals.end());
        int n = intervals.size();
        int firstEnd = intervals[0][1];
        int count =0;
        for(int i =1; i<n; i++){
            //index 1 se start krenge
            // aur compare krenge ki 1st ka last agar chota hai 2 ke first se ya barabar hai to firsrEnd ko update kar do
            // agar aisa nhi hota to min nikalo intervals aur fristEnd ka then ise hi update kr do
            if(intervals[i][0]>=firstEnd){
                firstEnd = intervals[i][1]; // update kiye jo hai usek last terms se
            }
            
            else{
                firstEnd = min(firstEnd , intervals[i][1]);
                count = count+1;
            }
        }
return count;        
};