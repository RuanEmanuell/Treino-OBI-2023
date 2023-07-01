var N = 0;
var total = 0;

V = prompt();
N = prompt();

total = V*N;

for(var i=10; i<=90; i+=10){
    console.log(Math.ceil(total*(i/100)));
}