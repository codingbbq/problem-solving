// https://leetcode.com/problems/decode-the-message/
// 2325. Decode the Message
{
    function decodeMessage(key: string, message: string): string {
        const map = new Map<string, string>();
        let a = 97;
        for(let i = 0; i < key.length; i++) {
            let n = key[i].charCodeAt(0);
            if(!map.has(key[i]) && (n >= 97 && n <= 122)) {
                map.set(key[i], String.fromCharCode(a++));
            }
        }

        // Decoding
        let decode = "";
        for(let j = 0; j < message.length; j++) {
            decode += map.has(message[j]) ? map.get(message[j]) : message[j];
        }
        return decode;
    };

    const key = "the quick brown fox jumps over the lazy dog", message = "vkbs bs t suepuv";
    console.log(decodeMessage(key, message));
}