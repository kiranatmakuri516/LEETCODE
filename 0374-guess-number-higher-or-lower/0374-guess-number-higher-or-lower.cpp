/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */
#define ll long long
class Solution {
public:
    int guessNumber(int n) {
        ll p,q;
        p=1;
        q=n;
        while(p<=q)
        {
            ll k=(p+q)/2;
            ll l=guess(k);
            if(l==0)
                return k;
            else if(l==1)
                p=k+1;
            else if(l==-1)
                q=k-1;
        }
        return -1;
    }
};