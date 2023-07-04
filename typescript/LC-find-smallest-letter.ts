// https://leetcode.com/problems/find-smallest-letter-greater-than-target/
// 744. Find Smallest Letter Greater Than Target
{
    function nextGreatestLetter(letters: string[], target: string): string {
        let start = 0;
        let end = letters.length - 1;
        
        while(start <= end) {
            let mid = Math.floor(start + ((end - start) / 2));
            if(target < letters[mid]) {
                end = mid-1;
            } else if(target > letters[mid]) {
                start = mid+1;
            } else {
                start += 1;
            }
        }
        return start > letters.length - 1 ? letters[0] : letters[start];
    };

    const letters = ["c","f","j"], target = "j";
    console.log(nextGreatestLetter(letters, target));
}
