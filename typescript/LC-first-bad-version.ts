// https://leetcode.com/problems/first-bad-version/description/
// 278. First Bad Version
/**
 * The knows API is defined in the parent class Relation.
 * isBadVersion(version: number): boolean {
 *     ...
 * };
 */

var solution = function(isBadVersion: any) {

    return function(n: number): number {
        let low = 0;
        let high = n;
        let lastBadVersion = 1;
        while(low <= high) {
            let mid = Math.floor(low + (high - low)/2);
            if(isBadVersion(mid)) {
                lastBadVersion = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return lastBadVersion;
    };
};