/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    let map1= new Map();
    let map2= new Map();
    if(s.length!=t.length)return false;
   for(let i=0;i<s.length;i++){
       if(map1[s[i]]){map1[s[i]]++;}
       else{
           map1[s[i]]=1;
       }
       if(map2[t[i]]){map2[t[i]]++;}
         else{
           map2[t[i]]=1;
       }
   }
   for(let i=0;i<s.length;i++){
       if(map1[s[i]] != map2[s[i]])return false;
   }
    return true;
};