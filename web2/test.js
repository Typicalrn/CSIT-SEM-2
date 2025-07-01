const mainString = "Hello ";

function count(s) {
    let counted = [];
    for (let i = 0; i < s.length; i++) {
        let count = 0;
        if (!counted.includes(s[i])) {
            for (let j = 0; j < s.length; j++) {
                if (s[i] === s[j]) {
                    count++;
                }
            }
            counted.push(s[i]);
            console.log(s[i] = count);
        }
    }
}

count(mainString);