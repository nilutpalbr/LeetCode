/**
 * @param {character[]} s
 * @return {void} Do not return anything, modify s in-place instead.
 */
var reverseString = function(s) {
       let len= s.length/2;
       let end= s.length-1;
    for(let i=0;i<len;i++){
        let temp= s[i];
        s[i]=s[end];
        s[end--]=temp;
    }
};