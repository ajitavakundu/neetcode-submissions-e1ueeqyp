/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low = 1;
        int high = n;
        int mid;
        int res = -1;

        while(low<=high) {
            mid = low + (long)(high - low) / 2;
            //std::cout<<"Mid :"<<mid<< endl;
            res = guess(mid);
            //std::cout<<"Res :"<<res<<endl;

            if(0 == res)
                break;
            else if (res == 1)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return mid;
    }
};