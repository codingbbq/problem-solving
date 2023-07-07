// https://leetcode.com/problems/unique-email-addresses/
// 929. Unique Email Addresses
{
    function numUniqueEmails(emails: string[]): number {
        const unique: Set<string> = new Set();
        for(let i = 0; i < emails.length; i++) {
            // Find domain name
            let email = emails[i].split('@');
            let domain = email[1];
            let username = email[0].split('+')[0].replace(/./g, '');
            unique.add(`${username}@${domain}`);
        }
        return unique.size;
    };

    const emails = ["test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"];
    console.log(numUniqueEmails(emails));
}