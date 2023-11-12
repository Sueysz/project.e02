let i = 1;
let e = 2;
let r = 0;
let t = 2;

while (r < 4000000) {
    r = i + e;
    i = e;
    e = r;

    if (r % 2 === 0) {
        t = t + r;
        console.log(t);
    }
}

console.log(r);
