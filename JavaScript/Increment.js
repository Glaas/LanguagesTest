x = 0;

startTime = new Date();

while (x<2000000000){
    x++;
}
endTime = new Date();
var timeDiff = endTime - startTime;

star = new Date();
for (let index = 0; index < 2000000000; index++) {
    
}
end = new Date();
var diff = end - star;

console.log(' value of x = ' + timeDiff);
console.log(' value of x = ' + diff);