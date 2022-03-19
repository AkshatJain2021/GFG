class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        unordered_map<int,int>a;
        unordered_map<int,int>b;
        for(int i=0;i<A.size();i++)
        {
            a[A[i]]++;
        }
         for(int i=0;i<B.size();i++)
        {
            b[B[i]]++;
        }
        if(a.size()!=b.size())
        {
            return 0;
        }
        unordered_map<int,int>::iterator it;
        for(it=a.begin();it!=a.end();it++)
        {
            if(b.find(it->first)==b.end())
            {
                return 0;
            }
            else{
                  auto it3=b.find(it->first);
                  if(it3->second==it->second)
                  {
                      continue;
                  }
                  else{
                      return 0;
                  }
            }
        }
        return 1;
    }
};