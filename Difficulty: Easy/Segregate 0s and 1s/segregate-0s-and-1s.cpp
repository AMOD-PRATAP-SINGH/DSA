class Solution {
  public:
    void segregate0and1(vector<int> &arr)
    {
        int zero=0;
        
        for(int k=0;k<arr.size();k++)
        {
            if(arr[k]==0)
                {zero++;}
                
        }
        
        for(int k=0;k<arr.size();k++)
        {
            if(k<zero)
            {
                arr[k]=0;
            }
            else
            {
                arr[k]=1;
            }
        }
    }
};