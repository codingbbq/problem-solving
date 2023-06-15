// https://leetcode.com/problems/is-object-empty/
// 2727. Is Object Empty

{
    function isEmpty(obj: Record<string, any> | any[]): boolean {
        return Object.keys(obj).length === 0;
    };

    const obj = {"x": 5, "y": 42};
    console.log(isEmpty(obj));
}
