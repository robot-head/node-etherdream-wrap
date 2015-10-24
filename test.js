// test.js
var node_etherdream = require('./build/Release/etherdream');

var rtn = node_etherdream.etherdream_lib_start();
console.log(rtn);
setTimeout(function() {
  var num_ethdream = node_etherdream.etherdream_dac_count();
  console.log('Number of etherdreams found: ' + num_ethdream);
}, 1500);
