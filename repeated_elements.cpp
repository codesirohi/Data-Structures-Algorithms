int repeatedNumber(const vector<int> &A) {
    
    int n = A.size();
    if(n==0 || n==1) return -1;
    
    vector<int> ex(n+2,0);
   
    
    
    for(auto it: A){
        
        if(ex[it]!=0){
            return it;
            break;
        }
        else{
            ex[it]=-1;
        }
    }
    
            
        
    
}
