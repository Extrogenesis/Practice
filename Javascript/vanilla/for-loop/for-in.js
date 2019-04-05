// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/statements/for...in

// for..in, in javascript is NOT like for..in in python. Does not return a bool

// for..in iterates over properties of an OBJECT

const obj = {a: 1, b: 2, c: 3}


for (let key in obj){
	console.log(`obj.${key} = ${obj[key]}`);
}

