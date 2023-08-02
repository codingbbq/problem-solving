// https://leetcode.com/problems/encode-and-decode-tinyurl/description/
// 535. Encode and Decode TinyURL
{
    
    let map: Map<number, string> = new Map();
    let counter: number = 1;
    function encode(longUrl: string): string {
        map.set(counter, longUrl);
        let output =  "http://tinyurl.com/"+counter;
        counter++;
        return output;

    };

    function decode(shortUrl: string): string {
        let id = Number(shortUrl.slice(shortUrl.lastIndexOf('/') + 1));
        return map.get(id) ?? '';
    };

   console.log(decode(encode("https://leetcode.com/problems/design-tinyurl")));
}