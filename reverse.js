//557 Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

 //reverse word in a string

var reverseWords = function(s) {
    const word = s.split(' ');
    const reverse = word.map(word => word.split('').reverse().join(''));
    return reverse.join(' ');
    
};