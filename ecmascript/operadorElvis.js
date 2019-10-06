// Operador Elvis
function elvis(object, path) {
    return path ? path.split('.').reduce(function (value, key) {
        return value && value[key];
    }, object) : object;
}

// Example
const  o = { a: { b: 1, c: 2 }, d: 3 };
elvis(o, 'a');
console.log(elvis(o, 'a.d'));
// = { b: 1, c: 2 }
elvis(o, 'a.b');
// = 1
elvis(o);
// = { a: { b: 1, c: 2 }, d: 3 }
elvis(o, 'x');
// = undefined
