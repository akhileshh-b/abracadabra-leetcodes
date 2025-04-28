class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low = 0;
        int high = letters.size() - 1;
        
        // If target is greater than or equal to the last element, wrap around to the first element
        if (target >= letters[high]) {
            return letters[0];
        }

        while (low <= high) {
            int mid = (low + high) / 2;
            if (letters[mid] <= target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        // At this point, 'low' is the index of the smallest letter greater than target
        return letters[low];
    }
};


// class Solution {
//     int chartoint(char c){
//         int x = (int)c;
//         return x;
//     }
// public:
//     char nextGreatestLetter(vector<char>& letters, char target) {
//         int low = 0;
//         int high = letters.size()-1;
//         int targetint = (int)target;
//         int ans=-1;
//         while(low<=high){
//             int mid=(low+high)/2;
//             char temp = letters[mid];
//             if(chartoint(temp)==target){
//                 ans = mid;
//             }
//             else if(temp<target){
//                 high = mid-1;
//             }
//             else if(temp>target){
//                 low = mid+1;
//             }
//         }
//         ans++;
//         // if(ans==letters.size()-1){
//         //     return letters[0];
//         // }else{
//         return letters[ans];
//     // }
//     }
// };