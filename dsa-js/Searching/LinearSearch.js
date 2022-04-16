// Linear Search

var beasts = ['Centaur', 'Godzilla', 'Mosura', 'Minotaur', 'Hydra', 'Nessie'];

let search = 'Godzilla';
console.log(beasts.indexOf(search)); // 1

let ind = beasts.findIndex(function(item) {
    return item === search;
});
console.log(ind); // 1

let f = beasts.find(function(item) {
    return item === search;
});
console.log(f);  // Godzilla

console.log(beasts.includes(search)); // true