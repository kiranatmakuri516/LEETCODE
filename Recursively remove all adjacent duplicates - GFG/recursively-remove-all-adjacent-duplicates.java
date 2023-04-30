//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main (String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim()); //Inputting the testcases
        while(t-->0){
            String S = br.readLine();
            Solution ob = new Solution();
            System.out.println(ob.rremove(S));
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{
    String rremove(String S) {
        StringBuilder sb = new StringBuilder();
        int N=S.length();
        char lastChar = 0;
        for(int i=0; i<N; i++) {
            // skip all same characters.
            // stand at a character and see if there are repeated characters
            boolean repeated=false;
            while(i+1<N && S.charAt(i) == S.charAt(i+1)) {
                i++;
                repeated=true;
            }
            
            if(!repeated) {
                sb.append(S.charAt(i));
            }
        }
        
        if(S.length() == sb.length()) {
            return sb.toString();
        } else {
            return rremove(sb.toString());
        }
    }
}