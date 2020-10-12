public class PrefixSum{
    
    static void prefixSum(int[] arr,int n,int[] prefixarray)
    {
        prefixarray[0] = arr[0];
        
        for(int i=1;i<n;++i)
        prefixarray[i] = prefixarray[i-1]+arr[i];
    }

     public static void main(String[] args)
     {
         int arr[] = {10,3,57,8,99};
         
         int n = arr.length;
         
         
         int[] prefixarray = new int[n];
         
         prefixSum(arr,n,prefixarray);
         
         for (int i = 0; i < n; i++) 
            System.out.print(prefixarray[i] + " "); 
        
        
         
         
     }
}
